/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/07 18:11:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_8192__0_(void)
{
	static char	_0_[8192];

	return (_0_);
}

char
	*_8192__1_(register int stack)
{
	static char	_1_[1][8192];

	return (_1_[stack]);
}

char
	*_8192__2_(register int stack)
{
	static char	_2_[2][8192];

	return (_2_[stack]);
}

char
	*_8192__4_(register int stack)
{
	static char	_4_[4][8192];

	return (_4_[stack]);
}

char
	*_8192__8_(register int stack)
{
	static char	_8_[8][8192];

	return (_8_[stack]);
}
