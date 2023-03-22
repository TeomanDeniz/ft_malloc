/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4__512_8192__.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:37:05 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_4__512_(register int stack)
{
	static char	_512_[512][4];

	return (_512_[stack]);
}

char
	*_4__1024_(register int stack)
{
	static char	_1024_[1024][4];

	return (_1024_[stack]);
}

char
	*_4__2048_(register int stack)
{
	static char	_2048_[2048][4];

	return (_2048_[stack]);
}

char
	*_4__4096_(register int stack)
{
	static char	_4096_[4096][4];

	return (_4096_[stack]);
}

char
	*_4__8192_(register int stack)
{
	static char	_8192_[8192][4];

	return (_8192_[stack]);
}
