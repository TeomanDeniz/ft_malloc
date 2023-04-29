/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_32_ITERATOR_512_TO_8192.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:47:57 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_32_iterator_512(register int stack)
{
	static char	_512_[512][32];

	return (_512_[stack]);
}

char
	*byte_32_iterator_1024(register int stack)
{
	static char	_1024_[1024][32];

	return (_1024_[stack]);
}

char
	*byte_32_iterator_2048(register int stack)
{
	static char	_2048_[2048][32];

	return (_2048_[stack]);
}

char
	*byte_32_iterator_4096(register int stack)
{
	static char	_4096_[4096][32];

	return (_4096_[stack]);
}

char
	*byte_32_iterator_8192(register int stack)
{
	static char	_8192_[8192][32];

	return (_8192_[stack]);
}
