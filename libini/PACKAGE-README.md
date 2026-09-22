# libini - Tiny ANSI C library for loading INI config files

This is a `build2` package for the [`ini`](https://github.com/rxi/ini)
C library. It is a tiny ANSI C library for loading `.ini` config files,
with support for sections, comment lines, and quoted string values (with
escapes).


## Usage

To start using `libini` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libini ^0.1.1
```

Then import the library in your `buildfile`:

```
import libs = libini%lib{ini}
```


## Importable targets

This package provides the following importable targets:

```
lib{ini}
```

The `ini_load()`, `ini_get()`, `ini_sget()`, and `ini_free()` functions
are declared in `<ini/ini.h>`. See that header for the complete API
description.


## Configuration variables

This package provides no configuration variables.
