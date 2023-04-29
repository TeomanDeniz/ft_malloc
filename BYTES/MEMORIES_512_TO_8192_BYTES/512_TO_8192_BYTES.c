/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   512_TO_8192_BYTES.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 18:07:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*byte_512(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_512_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_512_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_512_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_512_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_512_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_512_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_512_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_512_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_512_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_512_iterator_256(__ - 264));
	return ((void *)0);
}

char
	*byte_1024(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_1024_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_1024_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_1024_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_1024_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_1024_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_1024_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_1024_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_1024_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_1024_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_1024_iterator_256(__ - 264));
	return ((void *)0);
}

char
	*byte_2048(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_2048_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_2048_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_2048_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_2048_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_2048_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_2048_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_2048_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_2048_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_2048_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_2048_iterator_256(__ - 264));
	return ((void *)0);
}

char
	*byte_4096(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_4096_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_4096_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_4096_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_4096_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_4096_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_4096_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_4096_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_4096_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_4096_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_4096_iterator_256(__ - 264));
	return ((void *)0);
}

char
	*byte_8192(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_8192_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_8192_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_8192_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_8192_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_8192_iterator_8(__ - 11));
	if ((__ - 1) <= 36)
		return (byte_8192_iterator_16(__ - 20));
	if ((__ - 1) <= 69)
		return (byte_8192_iterator_32(__ - 37));
	if ((__ - 1) <= 134)
		return (byte_8192_iterator_64(__ - 70));
	if ((__ - 1) <= 263)
		return (byte_8192_iterator_128(__ - 135));
	if ((__ - 1) <= 520)
		return (byte_8192_iterator_256(__ - 264));
	return ((void *)0);
}
