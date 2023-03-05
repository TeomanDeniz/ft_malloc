/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   512_8192.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:47:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

void
	*_512_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_512_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_1024_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_1024_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_2048_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_2048_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_4096_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_4096_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_8192_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_8192_(recursive);
	recursive++;
	return ((void *)result);
}
