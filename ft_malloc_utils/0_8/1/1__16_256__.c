/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1__16_256__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:16:25 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_1__16_(register int stack)
{
	static char	_16_[16][1];

	return (_16_[stack]);
}

char
	*_1__32_(register int stack)
{
	static char	_32_[32][1];

	return (_32_[stack]);
}

char
	*_1__64_(register int stack)
{
	static char	_64_[64][1];

	return (_64_[stack]);
}

char
	*_1__128_(register int stack)
{
	static char	_128_[128][1];

	return (_128_[stack]);
}

char
	*_1__256_(register int stack)
{
	static char	_256_[256][1];

	return (_256_[stack]);
}
