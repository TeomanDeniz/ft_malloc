/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_256.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/08 03:40:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_8__16_(register int stack)
{
	static char	_16_[16][8];

	return (_16_[stack]);
}

char
	*_8__32_(register int stack)
{
	static char	_32_[32][8];

	return (_32_[stack]);
}

char
	*_8__64_(register int stack)
{
	static char	_64_[64][8];

	return (_64_[stack]);
}

char
	*_8__128_(register int stack)
{
	static char	_128_[128][8];

	return (_128_[stack]);
}

char
	*_8__256_(register int stack)
{
	static char	_256_[256][8];

	return (_256_[stack]);
}
