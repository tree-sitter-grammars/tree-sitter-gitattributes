// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterGitAttributes",
    products: [
        .library(name: "TreeSitterGitAttributes", targets: ["TreeSitterGitAttributes"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGitAttributes",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGitAttributesTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGitAttributes",
            ],
            path: "bindings/swift/TreeSitterGitAttributesTests"
        )
    ],
    cLanguageStandard: .c11
)
