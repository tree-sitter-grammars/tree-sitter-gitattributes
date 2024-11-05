package tree_sitter_gitattributes_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_gitattributes "github.com/tree-sitter-grammars/tree-sitter-gitattributes/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gitattributes.Language())
	if language == nil {
		t.Errorf("Error loading gitattributes grammar")
	}
}
