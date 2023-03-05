/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16384_262144.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/05 18:25:17 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_1__16384_(register int stack)
{
	static char	_16384_[16384][1];

	return (_16384_[stack]);
}

char
	*_1__32768_(register int stack)
{
	static char	_32768_[32768][1];

	return (_32768_[stack]);
}

char
	*_1__65536_(register int stack)
{
	static char	_65536_[65536][1];

	return (_65536_[stack]);
}

char
	*_1__131072_(register int stack)
{
	static char	_131072_[131072][1];

	return (_131072_[stack]);
}

char
	*_1__262144_(register int stack)
{
	static char	_262144_[262144][1];

	return (_262144_[stack]);
}
