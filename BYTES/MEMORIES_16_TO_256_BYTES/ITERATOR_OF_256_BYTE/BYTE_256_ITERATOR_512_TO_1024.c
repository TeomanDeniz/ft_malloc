/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_256_ITERATOR_512_TO_1024.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:46:20 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_256_iterator_512(register int stack)
{
	static char	_512_[512][256];

	return (_512_[stack]);
}

char
	*byte_256_iterator_1024(register int stack)
{
	static char	_1024_[1024][256];

	return (_1024_[stack]);
}
