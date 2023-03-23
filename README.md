# ft_malloc

`ft_malloc` is a kind of easy-make of original malloc that just made in scratch. It is just fills the **needed** size of vairable you need to fill with.

You don't have to use `free()` when you used this function.

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1081229366865956945/maximum-tension.png"></P>

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1081229311144640562/maximum-tension.png"></P>

# Setup:

> **Windows:**
>
> You can double click `MAKE.bat` file and directly install it.
> 
> Or in console, write `make` to compile the stup.

> **Linux, macOS:**
> 
> In console, write `make` to compile the setup.

## PHONYS

Here's the arguments `MAKE.bat` and `Makefile` using:

> `fc`, `fclean`, `fclear` -> Clear both object and created products.

> `c`, `clean`, `clear` -> Clear only object files

> `re` -> Remake everything

Then, in console: you need to include your binary compiler library (.a file) via parameter while compiling your file.

```
GCC main.c ft_malloc.a
```
	
# Utilization:

You can use `ft_malloc()` exactly like same with original `malloc()` from `<stdlib.h>` library but without `free()` needed.

```c
#include	"ft_malloc.h"
#include	<stdio.h>

int
	main(void)
{
	char	*test;

	test = (char *) ft_malloc(10 * sizeof(char *));

	test[0] = 'T';
	test[1] = 'e';
	test[2] = 'o';
	test[3] = 0;

	printf("%s\n", test);
	return (0);
}
```
