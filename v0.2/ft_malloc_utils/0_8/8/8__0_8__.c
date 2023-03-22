/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8__0_8__.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:37:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_8__0_(void)
{
	static char	_0_[8];

	return (_0_);
}

char
	*_8__1_(register int stack)
{
	static char	_1_[1][8];

	return (_1_[stack]);
}

char
	*_8__2_(register int stack)
{
	static char	_2_[2][8];

	return (_2_[stack]);
}

char
	*_8__4_(register int stack)
{
	static char	_4_[4][8];

	return (_4_[stack]);
}

char
	*_8__8_(register int stack)
{
	static char	_8_[8][8];

	return (_8_[stack]);
}
