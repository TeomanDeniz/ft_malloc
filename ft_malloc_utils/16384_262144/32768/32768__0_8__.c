/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   32768__0_8__.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:40:37 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_32768__0_(void)
{
	static char	_0_[32768];

	return (_0_);
}

char
	*_32768__1_(register int stack)
{
	static char	_1_[1][32768];

	return (_1_[stack]);
}

char
	*_32768__2_(register int stack)
{
	static char	_2_[2][32768];

	return (_2_[stack]);
}

char
	*_32768__4_(register int stack)
{
	static char	_4_[4][32768];

	return (_4_[stack]);
}

char
	*_32768__8_(register int stack)
{
	static char	_8_[8][32768];

	return (_8_[stack]);
}
