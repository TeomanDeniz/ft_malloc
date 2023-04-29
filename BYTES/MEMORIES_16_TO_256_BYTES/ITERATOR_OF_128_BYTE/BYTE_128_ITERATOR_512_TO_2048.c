/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_128_ITERATOR_512_TO_2048.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:42:25 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_128_iterator_512(register int stack)
{
	static char	_512_[512][1];

	return (_512_[stack]);
}

char
	*byte_128_iterator_1024(register int stack)
{
	static char	_1024_[1024][128];

	return (_1024_[stack]);
}

char
	*byte_128_iterator_2048(register int stack)
{
	static char	_2048_[2048][128];

	return (_2048_[stack]);
}
