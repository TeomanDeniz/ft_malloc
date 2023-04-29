/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_512_ITERATOR_16_TO_256.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 18:13:22 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_512_iterator_16(register int stack)
{
	static char	_16_[16][512];

	return (_16_[stack]);
}

char
	*byte_512_iterator_32(register int stack)
{
	static char	_32_[32][512];

	return (_32_[stack]);
}

char
	*byte_512_iterator_64(register int stack)
{
	static char	_64_[64][512];

	return (_64_[stack]);
}

char
	*byte_512_iterator_128(register int stack)
{
	static char	_128_[128][512];

	return (_128_[stack]);
}

char
	*byte_512_iterator_256(register int stack)
{
	static char	_256_[256][512];

	return (_256_[stack]);
}
