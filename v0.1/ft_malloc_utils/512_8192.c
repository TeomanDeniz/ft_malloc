/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   512_8192.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:47:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

char
	*_512_(void)
{
	register int	memory_coordinate;
	static char		memory[512];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 512);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 512) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_1024_(void)
{
	register int	memory_coordinate;
	static char		memory[1024];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 1024);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 1024) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_2048_(void)
{
	register int	memory_coordinate;
	static char		memory[2048];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 2048);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 2048) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_4096_(void)
{
	register int	memory_coordinate;
	static char		memory[4096];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 4096);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 4096) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_8192_(void)
{
	register int	memory_coordinate;
	static char		memory[8192];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 8192);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 8192) + memory_coordinate];
	counter++;
	return (result);
}
