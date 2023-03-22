/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0__0_8__.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:15:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_0__0_(void)
{
	static char	_0_[0];

	return (_0_);
}

char
	*_0__1_(register int stack)
{
	static char	_1_[1][0];

	return (_1_[stack]);
}

char
	*_0__2_(register int stack)
{
	static char	_2_[2][0];

	return (_2_[stack]);
}

char
	*_0__4_(register int stack)
{
	static char	_4_[4][0];

	return (_4_[stack]);
}

char
	*_0__8_(register int stack)
{
	static char	_8_[8][0];

	return (_8_[stack]);
}
