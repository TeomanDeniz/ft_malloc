#ifndef _WIN32
# include	<unistd.h> /*
 * write();
 */
#else
# include	<io.h> /*
 * _write();
 */
# define write _write
#endif

#include	"ft_malloc.h" /*
 * ft_malloc();
 */

void
	ft_putchar(char character)
{
	write(0, &character, 1);
}

int
	ft_strlen(const char *string)
{
	register int	counter;

	counter = 0;
	while (string[counter] != '\0')
		counter++;
	return (counter);
}

void
	ft_putstr(char *string)
{
	if (!string)
		return ;
	write(0, string, ft_strlen(string));
}

void
	ft_putnbr(int n)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number = (number * -1);
	}
	if (number < 10)
		ft_putchar(number + 48);
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}

// STARTS HERE

struct s_list
{
	int				a;
	struct s_list	*next;
};

typedef struct s_list	t_list;

void
	function(t_list *list)
{
	list->a = 12;
}

int
	main(void)
{
	t_list	*list;
	char	*test;

	test = (char *)ft_malloc(42 * sizeof(char));
	test[0] = 'a';
	test[1] = 'b';
	test[2] = 'c';
	test[3] = 0;

	list = (t_list *) ft_malloc(55 * sizeof(t_list));

	ft_putstr(test);

	list->next = (t_list *) ft_malloc(5 * sizeof(t_list));
	list->a = 33232;

	ft_putnbr(list->a);
	function(list->next);
	ft_putnbr(list->next->a);
	return (0);
}
