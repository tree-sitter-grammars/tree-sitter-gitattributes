import XCTest
import SwiftTreeSitter
import TreeSitterGitAttributes

final class TreeSitterGitAttributesTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gitattributes())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading gitattributes grammar")
    }
}
