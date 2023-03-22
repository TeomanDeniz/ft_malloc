/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   64__0_8__.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:38:49 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_64__0_(void)
{
	static char	_0_[64];

	return (_0_);
}

char
	*_64__1_(register int stack)
{
	static char	_1_[1][64];

	return (_1_[stack]);
}

char
	*_64__2_(register int stack)
{
	static char	_2_[2][64];

	return (_2_[stack]);
}

char
	*_64__4_(register int stack)
{
	static char	_4_[4][64];

	return (_4_[stack]);
}

char
	*_64__8_(register int stack)
{
	static char	_8_[8][64];

	return (_8_[stack]);
}
