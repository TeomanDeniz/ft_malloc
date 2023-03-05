/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16384.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/05 22:11:22 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_16__16384_(register int stack)
{
	static char	_16384_[16384][16];

	return (_16384_[stack]);
}