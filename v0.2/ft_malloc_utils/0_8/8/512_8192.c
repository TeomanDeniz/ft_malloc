/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   512_8192.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/05 18:21:55 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_8__512_(register int stack)
{
	static char	_512_[512][8];

	return (_512_[stack]);
}

char
	*_8__1024_(register int stack)
{
	static char	_1024_[1024][8];

	return (_1024_[stack]);
}

char
	*_8__2048_(register int stack)
{
	static char	_2048_[2048][8];

	return (_2048_[stack]);
}

char
	*_8__4096_(register int stack)
{
	static char	_4096_[4096][8];

	return (_4096_[stack]);
}

char
	*_8__8192_(register int stack)
{
	static char	_8192_[8192][8];

	return (_8192_[stack]);
}
