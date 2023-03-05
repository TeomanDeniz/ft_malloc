/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:54:28 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/05 18:06:34 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	search_memory(const char *memory, register int size)
{
	static int		counter;
	register int	detective;

	counter = 0 + counter;
	detective = 0;
	while (1)
	{
		counter++;
		if (memory[counter + size] != 0)
			detective = 0;
		else
			detective++;
		if (detective >= size)
			break ;
	}
	return (counter - size);
}
