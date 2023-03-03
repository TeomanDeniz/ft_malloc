/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eeprom_16384_262144.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:40:15 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*_eeprom_16384_(register int __recursive__)
{
	char	_16384_[16384];
	char	*__result__;

	__result__ = _16384_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_16384_(__recursive__));
}

char
	*_eeprom_32768_(register int __recursive__)
{
	char	_32768_[32768];
	char	*__result__;

	__result__ = _32768_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_32768_(__recursive__));
}

char
	*_eeprom_65536_(register int __recursive__)
{
	char	_65536_[65536];
	char	*__result__;

	__result__ = _65536_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_65536_(__recursive__));
}

char
	*_eeprom_131072_(register int __recursive__)
{
	char	_131072_[131072];
	char	*__result__;

	__result__ = _131072_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_131072_(__recursive__));
}

char
	*_eeprom_262144_(register int __recursive__)
{
	char	_262144_[262144];
	char	*__result__;

	__result__ = _262144_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_262144_(__recursive__));
}
