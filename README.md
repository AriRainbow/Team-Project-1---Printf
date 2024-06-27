# atlas-printf


## Desciption
'atlas-printf' is a custom implementation of the 'printf' function in C.
This project replicates the behavior of the standard C library 'printf'
function, handling specific conversion specifiers such as '%c', '%s', and
'%%'. The goal is to provide a foundational understanding of how formatted
output works in C by implementing these features from scratch.


## Table of Contents
1. [Usage](#usage)
2. [Examples](#examples)
3. [Authors](#authors)


## Usage
To compile the code, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
(-o atlas-printf) Alternate compile command ?? Is this allowed?

To run the program, use:
./a.out (./atlas-printf)


## Examples
Here are some examples on how to use the '_printf' function:

_printf("Character: [%c}\n", 'H');
_printf("String: [%s]\n", "Hello, World!");
_printf("Percent: [%%]\n");
_printf("Integer: [%d]\n", 42);
_printf("Negative integer: [%d\n", -42);


## Authors
Natalie Richie
James Hamby
Ari Williams
