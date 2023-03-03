# ft_malloc

`ft_malloc` is a kind of easy-make of original malloc that just made in scratch. It is just fills the **needed** size of vairable you need to fill with.

You don't have to use `free()` when you used this function.

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1081229366865956945/maximum-tension.png"></P>

<P ALIGN="CENTER"><IMG SRC="https://cdn.discordapp.com/attachments/630843149778157623/1081229311144640562/maximum-tension.png"></P>

# Example:
  
```c
#include	<stdio.h> /*
 * printf();
 */

#include	"ft_malloc.h" /*
 * ft_malloc();
 */

struct s_list
{
	int				a;
	struct s_list	*next;
};

typedef struct s_list	t_list;

int	main(void)
{
	t_list	*list;
	char	*test;

	test = (char *)ft_malloc(42 * sizeof(char));
	test[0] = 'a';
	test[1] = 'b';
	test[2] = 'c';
	test[3] = 0;

	list = (t_list *) ft_malloc(55 * sizeof(t_list));

	printf("%s\n", test);

	list->next = (t_list *) ft_malloc(5 * sizeof(t_list));
	list->a = 33232;

	printf("%d\n", list->a);

	list->next->a = 343;
	list->a = 33;
	printf("%d - %d\n", list->next->a, list->a);
	return (0);
}

```

# How is it works?

First: Let's just try to return an existing array without make it `static` variable!
For that, you should also need to create a puppet pointer to return the address of the array.

**⚠️ Warning: Make sure the create your array minimum `5` bytes!**
```c
#include	<stdio.h>

char
	*__byte__(void)
{
	char	_4_[5];
	char	*__result__;

	__result__ = _4_;
	return (__result__);
}

void
	*byte(void)
{
	char		*result;

	result = __byte__();
	return ((void *)result);
}

int
	main(void)
{
	char	*example;

	example = (char *)byte();
	example[0] = 'a';
	example[1] = 'b';
	example[2] = 0;
	printf("%s\n", example);
	return (0);
}
```

In the up: We have two function to create our free-byte:
- `__byte__` = The real creator and sender.
- `byte` = Byte senizer that collects the array's address directly.

**⚠️ If you try to get return from `__byte__` directly, you will fail to get the address of created array and it just going to corrupts the variable you're want to point the memory!**

So, in that case, you need to point it to a pointer second time from a function over and over again (*Only two times is enough*), then you successfully created and pointer your variable inside of your function(s) with that way.

**BUT**, Now we have another problem: When you set the variable second time, it is just going to connect the same address of before variable you allocated.

Here's an example:

```c
int
	main(void)
{
	char	*example_1;
	char	*example_2;

	example_1 = (char *)byte();
	example_2 = (char *)byte();
	example_1[0] = 'a';
	example_1[1] = 'b';
	example_1[2] = 0;
	printf("%s\n", example_1);
	example_2[0] = '1';
	example_2[1] = '2';
	example_2[2] = 0;
	printf("%s\n", example_1); // Should return "ab" but it is returning "12"!
	return (0);
}
```

For fix this issue: All you need to do is return your array by recursive way from `__byte__()` to create a **new** array variable to return.

```c
#include	<stdio.h>

char
	*__byte__(register int __recursive__)
{
	char	_4_[5];
	char	*__result__;

	__result__ = _4_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (__byte__(__recursive__));
}

void
	*byte(void)
{
	char		*result;

	result = __byte__(0);
	return ((void *)result);
}
```

Now, all we need to do a **reminder** that telling the `__byte__()` function to how much time it should recursive from `byte()` function by adding a `static` variable.
We also increase our `static` variable every time by the byte you ordered **(It is changing by the useage of the re-allocation by function recursive to get new array address, See: `recursive++;`)**

```c
#include	<stdio.h>

char
	*__byte__(register int __recursive__)
{
	char	_4_[5];
	char	*__result__;

	__result__ = _4_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (__byte__(__recursive__));
}

void
	*byte(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = __byte__(recursive);
	recursive++; // Here
	return ((void *)result);
}

int
	main(void)
{
	char	*example_1;
	char	*example_2;

	example_1 = (char *)byte();
	example_2 = (char *)byte();
	example_1[0] = 'a';
	example_1[1] = 'b';
	example_1[2] = 0;
	printf("%s\n", example_1);
	example_2[0] = '1';
	example_2[1] = '2';
	example_2[2] = 0;
	printf("%s\n", example_1); // Should return "ab"
	printf("%s\n", example_2); // Should return "12"
	return (0);
}
```

But still, it is not the right thing to result it as a correct memory base: **You should return the variable from functions as much as you can!**
As in made at the `ft_malloc()`.

# ⚠️ Known bugs:

When using a standard function like `<stdio.h>`'s `printf` functon on a variable, it may corrupt the other variables suddenly.
Will fix it later when find the bug.

**Make sure allocate more memory than you needed to fix this issue on `struct` types!**