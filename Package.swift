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
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
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
