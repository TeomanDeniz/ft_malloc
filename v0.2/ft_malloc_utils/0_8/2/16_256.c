/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_256.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/05 22:09:46 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_2__16_(register int stack)
{
	static char	_16_[16][2];

	return (_16_[stack]);
}

char
	*_2__32_(register int stack)
{
	static char	_32_[32][2];

	return (_32_[stack]);
}

char
	*_2__64_(register int stack)
{
	static char	_64_[64][2];

	return (_64_[stack]);
}

char
	*_2__128_(register int stack)
{
	static char	_128_[128][2];

	return (_128_[stack]);
}

char
	*_2__256_(register int stack)
{
	static char	_256_[256][2];

	return (_256_[stack]);
}
