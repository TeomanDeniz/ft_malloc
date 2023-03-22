/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16384__0_8__.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:40:17 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_16384__0_(void)
{
	static char	_0_[16384];

	return (_0_);
}

char
	*_16384__1_(register int stack)
{
	static char	_1_[1][16384];

	return (_1_[stack]);
}

char
	*_16384__2_(register int stack)
{
	static char	_2_[2][16384];

	return (_2_[stack]);
}

char
	*_16384__4_(register int stack)
{
	static char	_4_[4][16384];

	return (_4_[stack]);
}

char
	*_16384__8_(register int stack)
{
	static char	_8_[8][16384];

	return (_8_[stack]);
}
