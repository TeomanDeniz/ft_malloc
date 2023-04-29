/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_4_ITERATOR_16384_TO_65536.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:37:01 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_4_iterator_16384(register int stack)
{
	static char	_16384_[16384][4];

	return (_16384_[stack]);
}

char
	*byte_4_iterator_32768(register int stack)
{
	static char	_32768_[32768][4];

	return (_32768_[stack]);
}

char
	*byte_4_iterator_65536(register int stack)
{
	static char	_65536_[65536][4];

	return (_65536_[stack]);
}

char
	*byte_4_iterator_131072(register int stack)
{
	static char	_131072_[131072][4];

	return (_131072_[stack]);
}

char
	*byte_4_iterator_262144(register int stack)
{
	static char	_262144_[262144][4];

	return (_262144_[stack]);
}
