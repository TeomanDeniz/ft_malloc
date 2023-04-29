/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_2_ITERATOR_0_TO_8.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:31:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_2_iterator_0(void)
{
	static char	_0_[2];

	return (_0_);
}

char
	*byte_2_iterator_1(register int stack)
{
	static char	_1_[1][2];

	return (_1_[stack]);
}

char
	*byte_2_iterator_2(register int stack)
{
	static char	_2_[2][2];

	return (_2_[stack]);
}

char
	*byte_2_iterator_4(register int stack)
{
	static char	_4_[4][2];

	return (_4_[stack]);
}

char
	*byte_2_iterator_8(register int stack)
{
	static char	_8_[8][2];

	return (_8_[stack]);
}
