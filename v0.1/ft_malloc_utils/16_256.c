/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_256.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:32:07 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

char
	*_16_(void)
{
	register int	memory_coordinate;
	static char		memory[16];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 16);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 16) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_32_(void)
{
	register int	memory_coordinate;
	static char		memory[32];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 32);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 32) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_64_(void)
{
	register int	memory_coordinate;
	static char		memory[64];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 64);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 64) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_128_(void)
{
	register int	memory_coordinate;
	static char		memory[128];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 128);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 128) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_256_(void)
{
	register int	memory_coordinate;
	static char		memory[256];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 256);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 256) + memory_coordinate];
	counter++;
	return (result);
}
