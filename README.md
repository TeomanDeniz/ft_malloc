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