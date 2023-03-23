/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   262144__0_8__.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:40:26 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_262144__0_(void)
{
	static char	_0_[262144];

	return (_0_);
}

char
	*_262144__1_(register int stack)
{
	static char	_1_[1][262144];

	return (_1_[stack]);
}

char
	*_262144__2_(register int stack)
{
	static char	_2_[2][262144];

	return (_2_[stack]);
}

char
	*_262144__4_(register int stack)
{
	static char	_4_[4][262144];

	return (_4_[stack]);
}

char
	*_262144__8_(register int stack)
{
	static char	_8_[8][262144];

	return (_8_[stack]);
}
