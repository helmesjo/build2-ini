# ini - Tiny ANSI C library for loading INI config files

This is a `build2` package repository for [`ini`](https://github.com/rxi/ini),
a tiny ANSI C library for loading INI config files.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`ini` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libini/PACKAGE-README.md) file.

The development setup for `ini` uses the standard `bdep`-based workflow.
For example:

```
git clone .../ini.git
cd ini

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
