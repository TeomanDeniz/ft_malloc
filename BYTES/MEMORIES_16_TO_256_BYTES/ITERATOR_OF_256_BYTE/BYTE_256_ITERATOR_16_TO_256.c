/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BYTE_256_ITERATOR_16_TO_256.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 17:46:17 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_256_iterator_16(register int stack)
{
	static char	_16_[16][256];

	return (_16_[stack]);
}

char
	*byte_256_iterator_32(register int stack)
{
	static char	_32_[32][256];

	return (_32_[stack]);
}

char
	*byte_256_iterator_64(register int stack)
{
	static char	_64_[64][256];

	return (_64_[stack]);
}

char
	*byte_256_iterator_128(register int stack)
{
	static char	_128_[128][256];

	return (_128_[stack]);
}

char
	*byte_256_iterator_256(register int stack)
{
	static char	_256_[256][256];

	return (_256_[stack]);
}
