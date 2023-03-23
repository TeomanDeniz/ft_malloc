/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2__16384_131072__.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:27:44 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_2__16384_(register int stack)
{
	static char	_16384_[16384][2];

	return (_16384_[stack]);
}

char
	*_2__32768_(register int stack)
{
	static char	_32768_[32768][2];

	return (_32768_[stack]);
}

char
	*_2__65536_(register int stack)
{
	static char	_65536_[65536][2];

	return (_65536_[stack]);
}

char
	*_2__131072_(register int stack)
{
	static char	_131072_[131072][2];

	return (_131072_[stack]);
}

char
	*_2__262144_(register int stack)
{
	static char	_262144_[262144][2];

	return (_262144_[stack]);
}
