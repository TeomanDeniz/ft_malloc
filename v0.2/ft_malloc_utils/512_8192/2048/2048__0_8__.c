/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2048__0_8__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:41:28 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_2048__0_(void)
{
	static char	_0_[2048];

	return (_0_);
}

char
	*_2048__1_(register int stack)
{
	static char	_1_[1][2048];

	return (_1_[stack]);
}

char
	*_2048__2_(register int stack)
{
	static char	_2_[2][2048];

	return (_2_[stack]);
}

char
	*_2048__4_(register int stack)
{
	static char	_4_[4][2048];

	return (_4_[stack]);
}

char
	*_2048__8_(register int stack)
{
	static char	_8_[8][2048];

	return (_8_[stack]);
}
