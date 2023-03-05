# ft_malloc

`ft_malloc` is a kind of easy-make of original malloc that just made in scratch. It is just fills the **needed** size of vairable you need to fill with.

You don't have to use `free()` when you used this function.

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1081229366865956945/maximum-tension.png"></P>

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1081229311144640562/maximum-tension.png"></P>

# Usage:

You can directly write `make` and use it.

## PHONYS
> `fc`, `fclean`, `fclear` -> Clear both object and created products.
> `c`, `clean`, `clear` -> Clear only object files
> `re` -> Remake everything

## Code

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

## V0.2:

This is creating needed size of static arrays in per use. This is the safer and most healthy way to allocate memory from the RAM

⚠️ Bugs: There is limit that creation of same size of static variables in the memory.

## V0.1:

It is creating a doll static variable and returns it. But when the allocator function called second or a few more times: Then it is searches an ordered sized empty memory to use.

This may be useful if you're writing a kernel.

⚠️ Bugs: Really rarely: The value will be corrupts in big wokrs. Memory leak detecting only in `-fsanitize=address` sometimes idk, but `Valgrind` nor `Leaks` are showing nothing wrong during the progress.

## V0.0:

This is the most **shitty** way to allocate memory from RAM. For love of god please don't use it.

It is creating a doll array variable, and returns it's address directly to use the place where the variable was used to.

⚠️ Bugs: When using a standard function like `<stdio.h>`'s `printf` functon on a variable, it may corrupt the other variables suddenly.
