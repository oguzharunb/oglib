
# Custom C Library Implementation

This repository contains implementations of various C standard library functions including `write` and `read` (prefixed with `og_`), along with scripts and a Makefile to compile and test them against their standard counterparts.

## Files and Structure

### 1. **Main Directory**
- `og_{base_function}.c` - Custom implementation of the `libc` functions.
- `prototype.h` - Header file containing function prototypes.
- `run.sh` - Script for testing custom functions against their standard counterparts.
- `scrape_fnames.sh` - Script that finds the source files for compilation.
- `set_prototypes.sh` - Script to set function prototypes in the header file.
- `config.json` - Config file to configure different components of the library.
  
### 2. **Test Mains (`mains/` Directory)**
- Contains main files used to test the custom implementations of each function. Each main file is suffixed with the name of the function, for example, `og_memset_main.c`.

### 3. **Makefile**
- A makefile that automates the process of compiling the custom library (in this case `oglib.a`), generating headers, and cleaning up the build directory.

## How to Use

### Compilation
To compile the custom library and generate `oglib.a` and `oglib.h`, run the following command:

```bash
make
```

### Running Tests
To test the custom functions, you can use the provided `run.sh` script. For example, to test the `og_memset` function, run:

```bash
./run.sh og_memset
```

This script:
1. Replaces instances of the custom function (`og_{function_name}`) with the standard one (`{function_name}`).
2. Compiles the original and modified tests.
3. Runs both versions and compares their outputs using `diff`.
4. If the function is not in Standard C Library it will just compile the one in custom library.

### Cleaning Up
To clean up the object files, run:

```bash
make clean
```

To remove all generated files (including the header and library):

```bash
make fclean
```

### Rebuilding the Project
To rebuild the entire project from scratch, run:

```bash
make re
```

## Author
Developed by oguzharunb.
