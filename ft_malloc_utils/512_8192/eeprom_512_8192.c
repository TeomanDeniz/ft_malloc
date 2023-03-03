/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eeprom_512_8192.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:40:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*_eeprom_512_(register int __recursive__)
{
	char	_512_[512];
	char	*__result__;

	__result__ = _512_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_512_(__recursive__));
}

char
	*_eeprom_1024_(register int __recursive__)
{
	char	_1024_[1024];
	char	*__result__;

	__result__ = _1024_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_1024_(__recursive__));
}

char
	*_eeprom_2048_(register int __recursive__)
{
	char	_2048_[2048];
	char	*__result__;

	__result__ = _2048_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_2048_(__recursive__));
}

char
	*_eeprom_4096_(register int __recursive__)
{
	char	_4096_[4096];
	char	*__result__;

	__result__ = _4096_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_4096_(__recursive__));
}

char
	*_eeprom_8192_(register int __recursive__)
{
	char	_8192_[8192];
	char	*__result__;

	__result__ = _8192_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_8192_(__recursive__));
}
