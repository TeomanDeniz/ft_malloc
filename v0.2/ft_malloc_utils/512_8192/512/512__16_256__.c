/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   512__16_256__.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:42:02 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_512__16_(register int stack)
{
	static char	_16_[16][512];

	return (_16_[stack]);
}

char
	*_512__32_(register int stack)
{
	static char	_32_[32][512];

	return (_32_[stack]);
}

char
	*_512__64_(register int stack)
{
	static char	_64_[64][512];

	return (_64_[stack]);
}

char
	*_512__128_(register int stack)
{
	static char	_128_[128][512];

	return (_128_[stack]);
}

char
	*_512__256_(register int stack)
{
	static char	_256_[256][512];

	return (_256_[stack]);
}
