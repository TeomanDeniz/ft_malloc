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
	*_32__0_(void)
{
	static char	_0_[32];

	return (_0_);
}

char
	*_32__1_(register int stack)
{
	static char	_1_[1][32];

	return (_1_[stack]);
}

char
	*_32__2_(register int stack)
{
	static char	_2_[2][32];

	return (_2_[stack]);
}

char
	*_32__4_(register int stack)
{
	static char	_4_[4][32];

	return (_4_[stack]);
}

char
	*_32__8_(register int stack)
{
	static char	_8_[8][32];

	return (_8_[stack]);
}
