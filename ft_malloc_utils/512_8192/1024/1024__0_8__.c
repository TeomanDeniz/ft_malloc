/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1024__0_8__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:41:15 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_1024__0_(void)
{
	static char	_0_[1024];

	return (_0_);
}

char
	*_1024__1_(register int stack)
{
	static char	_1_[1][1024];

	return (_1_[stack]);
}

char
	*_1024__2_(register int stack)
{
	static char	_2_[2][1024];

	return (_2_[stack]);
}

char
	*_1024__4_(register int stack)
{
	static char	_4_[4][1024];

	return (_4_[stack]);
}

char
	*_1024__8_(register int stack)
{
	static char	_8_[8][1024];

	return (_8_[stack]);
}
