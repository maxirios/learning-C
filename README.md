# C practice

Small C exercises to learn the language from scratch, coming from MicroPython. Everything compiles with `gcc` on the PC.

## Exercises

| # | Topic | File |
|---|-------|------|
| 01 | Fixed-width types, `sizeof`, integer overflow | `01-fixed-width-numbers.c` |
| 02 | Arrays and null-terminated strings | `02-arrays.c` |
| 03 | Pointers: `&` and `*` | `03-pointers.c` |
| 04 | Modifying a variable through a pointer in a function | `04-pointer-function.c` |
| 05 | `swap` with pointers | `05-swap.c` |
| 06 | Pointers and arrays | `06-array-pointer.c` |
| 07 | Passing an array and its length to a function | `07-sum-array.c` |
| 08 | `struct`, padding and `offsetof` (`sensor_msg_t`) | `08-struct-sensor-msg.c` |
| 09 | Struct by pointer and the `->` operator | `09-struct-pointer.c` |
| 10 | `enum` and its effect on struct size | `10-enums.c` |
| 11 | `const` and `static` (persistent local variable) | `11-const-static.c` |
| 12 | Header/source split, `#pragma once` | `12-headers/` |
| 13 | `static` functions (file-private) | `13-static/` |
| 14 | Function pointers | `14-function-pointers.c` |
| 15 | Callbacks (passing a function as an argument) | `15-callback.c` |
| 16 | `volatile`, compared in the generated assembly | `16-volatile/` |
| 17 | `malloc`/`free` and leak detection with ASan | `17-malloc-free.c` |

## Building

The `Makefile` builds every exercise into `build/`, which is git-ignored:

```bash
make                # all top-level exercises + 12-headers and 13-static
make asm            # assembly output for 16-volatile (it has no main)
make clean          # remove build/
./build/01-fixed-width-numbers
```

To build with AddressSanitizer (useful for 17-malloc-free):

```bash
make clean
make EXTRA=-fsanitize=address
setarch -R ./build/17-malloc-free
```

`make clean` first is needed because `make` doesn't notice flag changes.
`setarch -R` disables ASLR for that run: with GCC 12 and recent kernels,
ASan can crash intermittently without it.

Single exercises can still be built by hand:

```bash
gcc -Wall -Wextra 01-fixed-width-numbers.c -o build/01-fixed-width-numbers
```

Multi-file exercises need every `.c` on the command line:

```bash
cd 12-headers
gcc -Wall -Wextra main.c sensor_msg.c -o ../build/12-headers
```

## Conventions

- Run `make` before committing: every exercise in the repo should compile.
- Commits that only try something to see a compiler/linker/ASan error are
  prefixed with `Experiment:`.
