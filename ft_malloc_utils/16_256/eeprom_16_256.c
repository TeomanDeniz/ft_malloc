/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eeprom_16_256.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:31:43 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:40:36 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*_eeprom_16_(register int __recursive__)
{
	char	_16_[16];
	char	*__result__;

	__result__ = _16_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_16_(__recursive__));
}

char
	*_eeprom_32_(register int __recursive__)
{
	char	_32_[32];
	char	*__result__;

	__result__ = _32_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_32_(__recursive__));
}

char
	*_eeprom_64_(register int __recursive__)
{
	char	_64_[64];
	char	*__result__;

	__result__ = _64_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_64_(__recursive__));
}

char
	*_eeprom_128_(register int __recursive__)
{
	char	_128_[128];
	char	*__result__;

	__result__ = _128_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_128_(__recursive__));
}

char
	*_eeprom_256_(register int __recursive__)
{
	char	_256_[256];
	char	*__result__;

	__result__ = _256_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_256_(__recursive__));
}
