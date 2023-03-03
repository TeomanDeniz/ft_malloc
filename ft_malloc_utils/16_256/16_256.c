/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_256.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:32:07 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

void
	*_16_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_16_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_32_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_32_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_64_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_64_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_128_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_128_(recursive);
	recursive++;
	return ((void *)result);
}

void
	*_256_(void)
{
	static int	recursive;
	char		*result;

	recursive = 0 + recursive;
	result = _eeprom_256_(recursive);
	recursive++;
	return ((void *)result);
}
