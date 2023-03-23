/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   128__0_8__.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:39:19 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_128__0_(void)
{
	static char	_0_[128];

	return (_0_);
}

char
	*_128__1_(register int stack)
{
	static char	_1_[1][128];

	return (_1_[stack]);
}

char
	*_128__2_(register int stack)
{
	static char	_2_[2][128];

	return (_2_[stack]);
}

char
	*_128__4_(register int stack)
{
	static char	_4_[4][128];

	return (_4_[stack]);
}

char
	*_128__8_(register int stack)
{
	static char	_8_[8][128];

	return (_8_[stack]);
}
