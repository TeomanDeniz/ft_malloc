/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_TO_256_BYTES_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:41:22 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*byte_16_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_16_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_16_iterator_1024(__ - 1034));
	if ((__ - 1) <= 4107)
		return (byte_16_iterator_2048(__ - 2059));
	if ((__ - 1) <= 8204)
		return (byte_16_iterator_4096(__ - 4108));
	if ((__ - 1) <= 16397)
		return (byte_16_iterator_8192(__ - 8205));
	if ((__ - 1) <= 32782)
		return (byte_16_iterator_16384(__ - 16398));
	return ((void *)0);
}

char
	*byte_32_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_32_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_32_iterator_1024(__ - 1034));
	if ((__ - 1) <= 4107)
		return (byte_32_iterator_2048(__ - 2059));
	if ((__ - 1) <= 8204)
		return (byte_32_iterator_4096(__ - 4108));
	if ((__ - 1) <= 16397)
		return (byte_32_iterator_8192(__ - 8205));
	return ((void *)0);
}

char
	*byte_64_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_64_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_64_iterator_1024(__ - 1034));
	if ((__ - 1) <= 4107)
		return (byte_64_iterator_2048(__ - 2059));
	if ((__ - 1) <= 8204)
		return (byte_64_iterator_4096(__ - 4108));
	return ((void *)0);
}

char
	*byte_128_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_128_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_128_iterator_1024(__ - 1034));
	if ((__ - 1) <= 4107)
		return (byte_128_iterator_2048(__ - 2059));
	return ((void *)0);
}

char
	*byte_256_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_256_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_256_iterator_1024(__ - 1034));
	return ((void *)0);
}
