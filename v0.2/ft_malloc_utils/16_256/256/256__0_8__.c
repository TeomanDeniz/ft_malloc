/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   256__0_8__.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:39:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_256__0_(void)
{
	static char	_0_[256];

	return (_0_);
}

char
	*_256__1_(register int stack)
{
	static char	_1_[1][256];

	return (_1_[stack]);
}

char
	*_256__2_(register int stack)
{
	static char	_2_[2][256];

	return (_2_[stack]);
}

char
	*_256__4_(register int stack)
{
	static char	_4_[4][256];

	return (_4_[stack]);
}

char
	*_256__8_(register int stack)
{
	static char	_8_[8][256];

	return (_8_[stack]);
}
