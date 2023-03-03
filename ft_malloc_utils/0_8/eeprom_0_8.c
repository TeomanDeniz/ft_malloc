/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eeprom_0_8.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:01:17 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 15:01:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_malloc.h"

char
	*_eeprom_0_(register int __recursive__)
{
	char	_0_[5];
	char	*__result__;

	__result__ = _0_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_0_(__recursive__));
}

char
	*_eeprom_1_(register int __recursive__)
{
	char	_1_[5];
	char	*__result__;

	__result__ = _1_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_1_(__recursive__));
}

char
	*_eeprom_2_(register int __recursive__)
{
	char	_2_[5];
	char	*__result__;

	__result__ = _2_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_2_(__recursive__));
}

char
	*_eeprom_4_(register int __recursive__)
{
	char	_4_[5];
	char	*__result__;

	__result__ = _4_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_4_(__recursive__));
}

char
	*_eeprom_8_(register int __recursive__)
{
	char	_8_[9];
	char	*__result__;

	__result__ = _8_;
	if (__recursive__ <= 0)
		return (__result__);
	__recursive__--;
	return (_eeprom_8_(__recursive__));
}
