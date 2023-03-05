/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16384_65536.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/05 22:10:09 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_4__16384_(register int stack)
{
	static char	_16384_[16384][4];

	return (_16384_[stack]);
}

char
	*_4__32768_(register int stack)
{
	static char	_32768_[32768][4];

	return (_32768_[stack]);
}

char
	*_4__65536_(register int stack)
{
	static char	_65536_[65536][4];

	return (_65536_[stack]);
}

char
	*_4__131072_(register int stack)
{
	static char	_131072_[131072][4];

	return (_131072_[stack]);
}

char
	*_4__262144_(register int stack)
{
	static char	_262144_[262144][4];

	return (_262144_[stack]);
}
