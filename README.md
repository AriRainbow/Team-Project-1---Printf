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
```
To run the program, use:
./a.out

[Back to Table of Cotents](#table-of-contents)

## Examples
<a name="examples"></a>

Here are some examples on how to use the '_printf' function:

_printf("Character: [%c}\n", 'H'); <br>
_printf("String: [%s]\n", "Hello, World!"); <br>
_printf("Percent: [%%]\n"); <br>
_printf("Integer: [%d]\n", 42); <br>
_printf("Negative integer: [%d\n", -42);

[Back to Table of Cotents](#table-of-contents)

## Authors
<a name="authors"></a>

Natalie Richie <br>
James Hamby <br>
Ari Williams

[Back to Table of Cotents](#table-of-contents)
