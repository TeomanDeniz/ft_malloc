/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   256__16_256__.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:39:46 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_256__16_(register int stack)
{
	static char	_16_[16][256];

	return (_16_[stack]);
}

char
	*_256__32_(register int stack)
{
	static char	_32_[32][256];

	return (_32_[stack]);
}

char
	*_256__64_(register int stack)
{
	static char	_64_[64][256];

	return (_64_[stack]);
}

char
	*_256__128_(register int stack)
{
	static char	_128_[128][256];

	return (_128_[stack]);
}

char
	*_256__256_(register int stack)
{
	static char	_256_[256][256];

	return (_256_[stack]);
}
