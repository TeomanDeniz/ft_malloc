/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_TO_8_BYTES.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:20:29 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*byte_0(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_0_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_0_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_0_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_0_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_0_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_0_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_0_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_0_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_0_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_0_iterator_256(__ - 264));
	return ((void *)0);
}

char
	*byte_1(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_1_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_1_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_1_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_1_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_1_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_1_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_1_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_1_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_1_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_1_iterator_256(__ - 264));
	return (byte_1_part_2(__));
}

char
	*byte_2(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_2_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_2_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_2_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_2_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_2_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_2_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_2_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_2_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_2_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_2_iterator_256(__ - 264));
	return (byte_2_part_2(__));
}

char
	*byte_4(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_4_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_4_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_4_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_4_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_4_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_4_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_4_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_4_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_4_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_4_iterator_256(__ - 264));
	return (byte_4_part_2(__));
}

char
	*byte_8(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_8_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_8_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_8_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_8_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_8_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_8_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_8_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_8_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_8_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_8_iterator_256(__ - 264));
	return (byte_8_part_2(__));
}
