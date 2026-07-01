# Proposal: Extend file-metric plotting

Unify file-level metric configuration and extend both plotting generations to the seven appended numeric metrics while preserving legacy CSV compatibility and filenames.

The change adds one ordered enablement surface, skips unavailable appended data during batch generation, rejects unavailable direct requests, and paginates the build-stat summary at five metric rows per PDF page.
