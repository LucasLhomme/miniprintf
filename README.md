# MiniPrintf

> **Lightweight formatted output printer in C.**

## Overview
Minimalist subset implementation of C's `printf` function built using `stdarg.h` variadic arguments:
- `%d`, `%i`: Signed decimal integers
- `%s`: Character strings
- `%c`: Single ASCII characters
- `%%`: Literal percent escape

## Build & Usage
```bash
make
```
Produces `libmy.a` exposing `mini_printf`.

## License
Open-source under MIT License.
