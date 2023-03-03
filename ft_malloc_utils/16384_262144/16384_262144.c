/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16384_262144.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:48:01 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

void
	*_16384_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_16384_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_32768_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_32768_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_65536_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_65536_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_131072_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_131072_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_262144_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_262144_(recursive);
	recursive++;
	return ((void *)result);
}
