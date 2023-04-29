/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8192__0_8__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:42:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_8192_iterator_0(void)
{
	static char	_0_[8192];

	return (_0_);
}

char
	*byte_8192_iterator_1(register int stack)
{
	static char	_1_[1][8192];

	return (_1_[stack]);
}

char
	*byte_8192_iterator_2(register int stack)
{
	static char	_2_[2][8192];

	return (_2_[stack]);
}

char
	*byte_8192_iterator_4(register int stack)
{
	static char	_4_[4][8192];

	return (_4_[stack]);
}

char
	*byte_8192_iterator_8(register int stack)
{
	static char	_8_[8][8192];

	return (_8_[stack]);
}
