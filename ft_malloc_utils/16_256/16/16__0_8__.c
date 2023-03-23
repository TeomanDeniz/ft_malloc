/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16__0_8__.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:37:58 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_16__0_(void)
{
	static char	_0_[16];

	return (_0_);
}

char
	*_16__1_(register int stack)
{
	static char	_1_[1][16];

	return (_1_[stack]);
}

char
	*_16__2_(register int stack)
{
	static char	_2_[2][16];

	return (_2_[stack]);
}

char
	*_16__4_(register int stack)
{
	static char	_4_[4][16];

	return (_4_[stack]);
}

char
	*_16__8_(register int stack)
{
	static char	_8_[8][16];

	return (_8_[stack]);
}
