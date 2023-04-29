/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_8_ITERATOR_16384_TO_262144.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:39:15 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_8_iterator_16384(register int stack)
{
	static char	_16384_[16384][8];

	return (_16384_[stack]);
}

char
	*byte_8_iterator_32768(register int stack)
{
	static char	_32768_[32768][8];

	return (_32768_[stack]);
}

char
	*byte_8_iterator_65536(register int stack)
{
	static char	_65536_[65536][8];

	return (_65536_[stack]);
}

char
	*byte_8_iterator_131072(register int stack)
{
	static char	_131072_[131072][8];

	return (_131072_[stack]);
}

char
	*byte_8_iterator_262144(register int stack)
{
	static char	_262144_[262144][8];

	return (_262144_[stack]);
}
