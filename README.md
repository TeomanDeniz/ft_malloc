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

# How is it works?

I don't know.
<BR>
<BR>
<BR>
Just kidding: It is creating a static array in ordered size and returns it.

But instead of returning the exact same size of memory allocation, it is sending a close value.

Like:

> `ft_malloc(5)` going to return 8 bytes of storage

> `ft_malloc(19)` going to return 32 bytes of storage

> `ft_malloc(35)` going to return 64 bytes of storage

However, the hard part is not sending the same static array in this situation.

Like allocating 2 different same size variables.

It should return different same sized static arrays right?

For that, we just need to do a little pyramid like an idler idiot.

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1089172691908558848/ft_malloc.png"></P>

This is the a part of the algorithm showing how it is working.

We created a static integer that choices different same sized arrays as you ordered.

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1088552814676021259/1.png"></P>

But as you can see at that image, something strange mathematical calculation happening in `if` commands.

They are for: when we sending the static integer to function that creating the ordered sized memory for us, it should start from `0` instead of static value's itself.

So, for that: We should also add in `if` command previous calculated static variable values.
And lastly, we should do an extraction via received static value with ordered size, and bob's your uncle.

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1088552802508341359/2.png"></P>

Why we calculating the `if` like that?

Because the before calculation is also includes the total used value of static variable. So, this is the smarter way to handle that.

(`previous if wanted value`) - (`ordered size` + 1)
