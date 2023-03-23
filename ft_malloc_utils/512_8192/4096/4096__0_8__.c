/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4096__0_8__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:41:42 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_4096__0_(void)
{
	static char	_0_[4096];

	return (_0_);
}

char
	*_4096__1_(register int stack)
{
	static char	_1_[1][4096];

	return (_1_[stack]);
}

char
	*_4096__2_(register int stack)
{
	static char	_2_[2][4096];

	return (_2_[stack]);
}

char
	*_4096__4_(register int stack)
{
	static char	_4_[4][4096];

	return (_4_[stack]);
}

char
	*_4096__8_(register int stack)
{
	static char	_8_[8][4096];

	return (_8_[stack]);
}
