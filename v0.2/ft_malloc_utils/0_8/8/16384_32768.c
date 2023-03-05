/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16384_32768.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/05 22:11:56 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_8__16384_(register int stack)
{
	static char	_16384_[16384][8];

	return (_16384_[stack]);
}

char
	*_8__32768_(register int stack)
{
	static char	_32768_[32768][8];

	return (_32768_[stack]);
}

char
	*_8__65536_(register int stack)
{
	static char	_65536_[65536][8];

	return (_65536_[stack]);
}

char
	*_8__131072_(register int stack)
{
	static char	_131072_[131072][8];

	return (_131072_[stack]);
}

char
	*_8__262144_(register int stack)
{
	static char	_262144_[262144][8];

	return (_262144_[stack]);
}
