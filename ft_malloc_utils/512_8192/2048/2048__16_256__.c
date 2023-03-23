/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2048__16_256__.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:41:31 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_2048__16_(register int stack)
{
	static char	_16_[16][2048];

	return (_16_[stack]);
}

char
	*_2048__32_(register int stack)
{
	static char	_32_[32][2048];

	return (_32_[stack]);
}

char
	*_2048__64_(register int stack)
{
	static char	_64_[64][2048];

	return (_64_[stack]);
}

char
	*_2048__128_(register int stack)
{
	static char	_128_[128][2048];

	return (_128_[stack]);
}

char
	*_2048__256_(register int stack)
{
	static char	_256_[256][2048];

	return (_256_[stack]);
}
