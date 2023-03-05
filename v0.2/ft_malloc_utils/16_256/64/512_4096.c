/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   512_4096.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/05 22:13:05 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_64__512_(register int stack)
{
	static char	_512_[512][64];

	return (_512_[stack]);
}

char
	*_64__1024_(register int stack)
{
	static char	_1024_[1024][64];

	return (_1024_[stack]);
}

char
	*_64__2048_(register int stack)
{
	static char	_2048_[2048][64];

	return (_2048_[stack]);
}

char
	*_64__4096_(register int stack)
{
	static char	_4096_[4096][64];

	return (_4096_[stack]);
}
