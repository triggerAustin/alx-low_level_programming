# alx-low_level_programming

My work from the low-level programming module of the ALX Software Engineering program: C from "Hello, World" through pointers, memory management, data structures, libraries and search algorithms. It is my first C programming project, and it contains over 230 C source files across 25 project directories.

## Conventions

- Each project lives in its own directory named `0xNN-topic`, where the hexadecimal number is the project's position in the curriculum.
- Files are prefixed with their task number, for example `2-strlen.c`. Files starting with `100` or above are the advanced tasks for that project.
- A `*-main.c` file is a test driver that calls the task's function; it is not part of the solution.
- Code follows the Betty style guide, with Betty-style function documentation comments.
- Programs are compiled with GCC using strict warnings.

## Projects

| Directory | Topic | Highlights |
| --- | --- | --- |
| `0x00-hello_world` | First programs, the stages of compilation | Preprocessor, compiler and assembler output, `puts`, `printf`, `sizeof` |
| `0x01-variables_if_else_while` | Variables, conditionals, loops | Number and digit exercises, `print_comb` series |
| `0x02-functions_nested_loops` | Functions and nested loops | Prototypes, scope, header files |
| `0x03-debugging` | Debugging | Fixing broken programs: largest number, remaining days |
| `0x04-more_functions_nested_loops` | More functions and loops | Character checks, triangles, `prime_factor` |
| `0x05-pointers_arrays_strings` | Pointers, arrays, strings | `reset_to_98`, `swap`, `strlen` |
| `0x06-pointers_arrays_strings` | Pointers and string handling | `strcat`, `strncat` and related |
| `0x07-pointers_arrays_strings` | Pointers to pointers, multidimensional arrays | `memset`, `memcpy`, `strchr` |
| `0x08-recursion` | Recursion | `puts_recursion`, `print_rev_recursion`, `is_palindrome`, `wildcmp` |
| `0x09-static_libraries` | Static libraries | `create_static_lib.sh`, `libmy.a` |
| `0x0A-argc_argv` | Command-line arguments | `whatsmyname`, `args`, `mul`, `add`, `change` |
| `0x0B-malloc_free` | Dynamic memory | `create_array`, `strdup`, `str_concat`, `alloc_grid` |
| `0x0C-more_malloc_free` | More dynamic memory | `malloc_checked`, `string_nconcat`, `calloc`, `realloc` |
| `0x0D-preprocessor` | Macros and header files | Object-like and function-like macros |
| `0x0E-structures_typedef` | Structs and `typedef` | `dog` struct: `init_dog`, `print_dog`, `new_dog`, `free_dog` |
| `0x0F-function_pointers` | Function pointers | `print_name`, `array_iterator`, `int_index`, a small calculator |
| `0x10-variadic_functions` | Variadic functions | `sum_them_all`, `print_numbers`, `print_strings`, `print_all` |
| `0x12-singly_linked_lists` | Singly linked lists | `print_list`, `list_len`, `add_node`, `add_node_end`, `free_list` |
| `0x13-more_singly_linked_lists` | More linked-list operations | `listint_t` functions, `pop_listint`, `get_nodeint` |
| `0x14-bit_manipulation` | Bitwise operations | `binary_to_uint`, `print_binary`, `get_bit`, `set_bit`, `clear_bit`, `flip_bits`, `get_endianness` |
| `0x15-file_io` | File I/O | `read_textfile`, `create_file`, `append_text_to_file`, a `cp` clone |
| `0x17-doubly_linked_lists` | Doubly linked lists | `dlistint_t` functions, `insert_dnodeint` |
| `0x18-dynamic_libraries` | Dynamic libraries | `1-create_dynamic_lib.sh`, `libdynamic.so` |
| `0x1A-hash_tables` | Hash tables | djb2 hash, `key_index`, set, get, print, delete, sorted hash table |
| `0x1E-search_algorithms` | Searching | Linear, binary, jump and interpolation search |

## Building and running

Compile a task together with its test driver and any header it needs:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-strlen.c -o 0-strlen
./0-strlen
```

For projects with a header file, keep it in the same directory so `#include "lists.h"` and similar resolve.

Build the libraries from the shell scripts in their directories:

```bash
cd 0x09-static_libraries && ./create_static_lib.sh
cd 0x18-dynamic_libraries && ./1-create_dynamic_lib.sh
```

## Tooling

- GCC for compilation
- [Betty](https://github.com/alx-tools/Betty) for style and documentation checks
- Valgrind for checking memory leaks in the dynamic-memory and data-structure projects

## License

No license has been specified yet.
