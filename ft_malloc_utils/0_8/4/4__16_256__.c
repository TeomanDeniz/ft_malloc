/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4__16_256__.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:36:52 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_4__16_(register int stack)
{
	static char	_16_[16][4];

	return (_16_[stack]);
}

char
	*_4__32_(register int stack)
{
	static char	_32_[32][4];

	return (_32_[stack]);
}

char
	*_4__64_(register int stack)
{
	static char	_64_[64][4];

	return (_64_[stack]);
}

char
	*_4__128_(register int stack)
{
	static char	_128_[128][4];

	return (_128_[stack]);
}

char
	*_4__256_(register int stack)
{
	static char	_256_[256][4];

	return (_256_[stack]);
}
