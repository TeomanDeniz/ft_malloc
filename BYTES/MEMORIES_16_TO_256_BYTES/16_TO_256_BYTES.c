/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_TO_256_BYTES.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:41:19 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*byte_16(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_16_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_16_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_16_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_16_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_16_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_16_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_16_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_16_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_16_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_16_iterator_256(__ - 264));
	return (byte_16_part_2(__));
}

char
	*byte_32(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_32_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_32_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_32_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_32_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_32_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_32_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_32_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_32_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_32_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_32_iterator_256(__ - 264));
	return (byte_32_part_2(__));
}

char
	*byte_64(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_64_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_64_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_64_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_64_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_64_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_64_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_64_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_64_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_64_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_64_iterator_256(__ - 264));
	return (byte_64_part_2(__));
}

char
	*byte_128(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_128_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_128_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_128_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_128_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_128_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_128_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_128_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_128_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_128_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_128_iterator_256(__ - 264));
	return (byte_128_part_2(__));
}

char
	*byte_256(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_256_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_256_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_256_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_256_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_256_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_256_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_256_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_256_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_256_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_256_iterator_256(__ - 264));
	return (byte_256_part_2(__));
}
