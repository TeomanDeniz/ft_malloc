/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 12:02:50 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

void
	*_0_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_0_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_1_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_1_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_2_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_2_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_4_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_4_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_8_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_8_(recursive);
	recursive++;
	return ((void *)result);
}
