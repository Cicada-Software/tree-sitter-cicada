# tree-sitter-cicada

Tree-sitter grammar for the Cicada DSL.

![Cicada DSL Example](/img/example.png)

## Installing

Before you start, make sure you [install Treesitter for Neovim](https://github.com/nvim-treesitter/nvim-treesitter#quickstart).

### Basic setup

```
$ git clone https://github.com/Cicada-Software/tree-sitter-cicada
$ cd tree-sitter-cicada
$ npm i
$ npx tree-sitter-cli generate
```

> If `./node_modules/.bin` is on your `PATH`, you don't need to use `npx` to
> run the Treesitter CLI.

### Update nvim config

Add the following to your `init.lua` file:

```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.cicada = {
  install_info = {
    url = "~/PATH/TO/tree-sitter-cicada",
    files = {"src/parser.c"},
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = "ci",
}
```

Next, run the following commands to copy the query files into your Neovim runtime:

```
$ mkdir $VIMRUNTIME/queries/cicada
$ cp queries/* $VIMRUNTIME/queries/cicada/
```

Finally, open Neovim, and type `:TSUpdate`.
