/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   32__512_8192__.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:38:37 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_32__512_(register int stack)
{
	static char	_512_[512][32];

	return (_512_[stack]);
}

char
	*_32__1024_(register int stack)
{
	static char	_1024_[1024][32];

	return (_1024_[stack]);
}

char
	*_32__2048_(register int stack)
{
	static char	_2048_[2048][32];

	return (_2048_[stack]);
}

char
	*_32__4096_(register int stack)
{
	static char	_4096_[4096][32];

	return (_4096_[stack]);
}

char
	*_32__8192_(register int stack)
{
	static char	_8192_[8192][32];

	return (_8192_[stack]);
}
