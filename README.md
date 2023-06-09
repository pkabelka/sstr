# scl

## sstr

`sstr` stands for *simple string*. It is a single header file implementation of
a very basic C string library.

### Usage

Similar to [nothings' stb](https://github.com/nothings/stb):

```c
#define SSTR_IMPLEMENTATION
#include "sstr.h"
```

You can adjust the size of additionally allocated memory when the string's
capacity overflows. You can define it before `#include "sstr.h"` in the same
file where `SSTR_IMPLEMENTATION` is defined with:

```c
#define SSTR_ALLOC_SIZE 32
```

An example program can be found [here](examples/sstr_example.c).

## sdll

`sdll` stands for *simple double linked list*. It is a single header file
implementation of a very basic double linked list.

### Usage

```c
#define SDLL_IMPLEMENTATION
#include "sdll.h"
```

An example program can be found [here](examples/sdll_example.c).

## sbintree

`sbintree` stands for *simple binary tree*. It is a single header file
implementation of a very basic binary search tree.

### Usage

`sbintree.h` also requires `sdll.h` and therefore `#define SDLL_IMPLEMENTATION`
too.

```c
#define SBINTREE_IMPLEMENTATION
#define SDLL_IMPLEMENTATION
#include "sbintree.h"
```

An example program can be found [here](examples/sbintree_example.c).

## LICENSE

This project is in public domain, see [LICENSE](LICENSE).
