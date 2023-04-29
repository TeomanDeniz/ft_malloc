/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16384_TO_262144_BYTES.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:57:56 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*byte_16384(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_16384_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_16384_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_16384_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_16384_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_16384_iterator_8(__ - 11));
	return ((void *)0);
}

char
	*byte_32768(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_32768_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_32768_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_32768_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_32768_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_32768_iterator_8(__ - 11));
	return ((void *)0);
}

char
	*byte_65536(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_65536_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_65536_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_65536_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_65536_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_65536_iterator_8(__ - 11));
	return ((void *)0);
}

char
	*byte_131072(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_131072_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_131072_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_131072_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_131072_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_131072_iterator_8(__ - 11));
	return ((void *)0);
}

char
	*byte_262144(void)
{
	static int	__;

	(__) = (__) + 0;
	(__)++;
	if ((__ - 1) == 0)
		return (byte_262144_iterator_0());
	if ((__ - 1) <= 2)
		return (byte_262144_iterator_1(__ - 1));
	if ((__ - 1) <= 5)
		return (byte_262144_iterator_2(__ - 3));
	if ((__ - 1) <= 10)
		return (byte_262144_iterator_4(__ - 6));
	if ((__ - 1) <= 19)
		return (byte_262144_iterator_8(__ - 11));
	return ((void *)0);
}
