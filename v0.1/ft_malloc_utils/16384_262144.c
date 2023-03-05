/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16384_262144.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:48:01 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_malloc.h"

char
	*_16384_(void)
{
	register int	memory_coordinate;
	static char		memory[16384];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 16384);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 16384) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_32768_(void)
{
	register int	memory_coordinate;
	static char		memory[32768];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 32768);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 32768) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_65536_(void)
{
	register int	memory_coordinate;
	static char		memory[65536];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 65536);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 65536) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_131072_(void)
{
	register int	memory_coordinate;
	static char		memory[131072];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 131072);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 131072) + memory_coordinate];
	counter++;
	return (result);
}

char
	*_262144_(void)
{
	register int	memory_coordinate;
	static char		memory[262144];
	static int		counter;
	char			*result;

	counter = 0 + counter;
	if (counter != 0)
		memory_coordinate = search_memory(memory, 262144);
	else
		memory_coordinate = 0;
	result = &memory[(counter * 262144) + memory_coordinate];
	counter++;
	return (result);
}
