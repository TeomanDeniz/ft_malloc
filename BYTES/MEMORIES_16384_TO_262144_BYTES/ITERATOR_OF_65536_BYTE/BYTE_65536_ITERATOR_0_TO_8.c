/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_65536_ITERATOR_0_TO_8.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 18:06:04 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_65536_iterator_0(void)
{
	static char	_0_[65536];

	return (_0_);
}

char
	*byte_65536_iterator_1(register int stack)
{
	static char	_1_[1][65536];

	return (_1_[stack]);
}

char
	*byte_65536_iterator_2(register int stack)
{
	static char	_2_[2][65536];

	return (_2_[stack]);
}

char
	*byte_65536_iterator_4(register int stack)
{
	static char	_4_[4][65536];

	return (_4_[stack]);
}

char
	*byte_65536_iterator_8(register int stack)
{
	static char	_8_[8][65536];

	return (_8_[stack]);
}
