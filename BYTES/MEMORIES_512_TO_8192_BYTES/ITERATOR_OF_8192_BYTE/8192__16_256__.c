/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8192__16_256__.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:42:15 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*byte_8192_iterator_16(register int stack)
{
	static char	_16_[16][8192];

	return (_16_[stack]);
}

char
	*byte_8192_iterator_32(register int stack)
{
	static char	_32_[32][8192];

	return (_32_[stack]);
}

char
	*byte_8192_iterator_64(register int stack)
{
	static char	_64_[64][8192];

	return (_64_[stack]);
}

char
	*byte_8192_iterator_128(register int stack)
{
	static char	_128_[128][8192];

	return (_128_[stack]);
}

char
	*byte_8192_iterator_256(register int stack)
{
	static char	_256_[256][8192];

	return (_256_[stack]);
}
