/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_TO_8_BYTES_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:20:34 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*byte_1_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_1_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_1_iterator_1024(__ - 1034));
	if ((__ - 1) <= 4107)
		return (byte_1_iterator_2048(__ - 2059));
	if ((__ - 1) <= 8204)
		return (byte_1_iterator_4096(__ - 4108));
	if ((__ - 1) <= 16397)
		return (byte_1_iterator_8192(__ - 8205));
	if ((__ - 1) <= 32782)
		return (byte_1_iterator_16384(__ - 16398));
	if ((__ - 1) <= 65551)
		return (byte_1_iterator_32768(__ - 32783));
	if ((__ - 1) <= 131088)
		return (byte_1_iterator_65536(__ - 65552));
	if ((__ - 1) <= 262161)
		return (byte_1_iterator_131072(__ - 131089));
	if ((__ - 1) <= 524306)
		return (byte_1_iterator_262144(__ - 262162));
	return ((void *)0);
}

char
	*byte_2_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_2_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_2_iterator_1024(__ - 1034));
	if ((__ - 1) <= 4107)
		return (byte_2_iterator_2048(__ - 2059));
	if ((__ - 1) <= 8204)
		return (byte_2_iterator_4096(__ - 4108));
	if ((__ - 1) <= 16397)
		return (byte_2_iterator_8192(__ - 8205));
	if ((__ - 1) <= 32782)
		return (byte_2_iterator_16384(__ - 16398));
	if ((__ - 1) <= 65551)
		return (byte_2_iterator_32768(__ - 32783));
	if ((__ - 1) <= 131088)
		return (byte_2_iterator_65536(__ - 65552));
	if ((__ - 1) <= 262161)
		return (byte_2_iterator_131072(__ - 131089));
	return ((void *)0);
}

char
	*byte_4_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_4_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_4_iterator_1024(__ - 1034));
	if ((__ - 1) <= 4107)
		return (byte_4_iterator_2048(__ - 2059));
	if ((__ - 1) <= 8204)
		return (byte_4_iterator_4096(__ - 4108));
	if ((__ - 1) <= 16397)
		return (byte_4_iterator_8192(__ - 8205));
	if ((__ - 1) <= 32782)
		return (byte_4_iterator_16384(__ - 16398));
	if ((__ - 1) <= 65551)
		return (byte_4_iterator_32768(__ - 32783));
	if ((__ - 1) <= 131088)
		return (byte_4_iterator_65536(__ - 65552));
	return ((void *)0);
}

char
	*byte_8_part_2(register int __)
{
	if ((__ - 1) <= 1033)
		return (byte_8_iterator_512(__ - 521));
	if ((__ - 1) <= 2058)
		return (byte_8_iterator_1024(__ - 1034));
	if ((__ - 1) <= 4107)
		return (byte_8_iterator_2048(__ - 2059));
	if ((__ - 1) <= 8204)
		return (byte_8_iterator_4096(__ - 4108));
	if ((__ - 1) <= 16397)
		return (byte_8_iterator_8192(__ - 8205));
	if ((__ - 1) <= 32782)
		return (byte_8_iterator_16384(__ - 16398));
	if ((__ - 1) <= 65551)
		return (byte_8_iterator_32768(__ - 32783));
	return ((void *)0);
}
