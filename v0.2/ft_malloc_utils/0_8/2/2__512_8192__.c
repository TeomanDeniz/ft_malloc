/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2__512_8192__.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:32:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_2__512_(register int stack)
{
	static char	_512_[512][2];

	return (_512_[stack]);
}

char
	*_2__1024_(register int stack)
{
	static char	_1024_[1024][2];

	return (_1024_[stack]);
}

char
	*_2__2048_(register int stack)
{
	static char	_2048_[2048][2];

	return (_2048_[stack]);
}

char
	*_2__4096_(register int stack)
{
	static char	_4096_[4096][2];

	return (_4096_[stack]);
}

char
	*_2__8192_(register int stack)
{
	static char	_8192_[8192][2];

	return (_8192_[stack]);
}
