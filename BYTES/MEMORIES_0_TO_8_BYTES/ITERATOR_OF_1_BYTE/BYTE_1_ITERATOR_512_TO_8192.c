/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_1_ITERATOR_512_TO_8192.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:28:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_1_iterator_512(register int stack)
{
	static char	_512_[512][1];

	return (_512_[stack]);
}

char
	*byte_1_iterator_1024(register int stack)
{
	static char	_1024_[1024][1];

	return (_1024_[stack]);
}

char
	*byte_1_iterator_2048(register int stack)
{
	static char	_2048_[2048][1];

	return (_2048_[stack]);
}

char
	*byte_1_iterator_4096(register int stack)
{
	static char	_4096_[4096][1];

	return (_4096_[stack]);
}

char
	*byte_1_iterator_8192(register int stack)
{
	static char	_8192_[8192][1];

	return (_8192_[stack]);
}
