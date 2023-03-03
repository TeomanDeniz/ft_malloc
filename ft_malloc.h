/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:19:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/03 14:53:33 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H 0.3 // Version

// Main memroy allocations

void	*_0_(void);
void	*_1_(void);
void	*_2_(void);
void	*_4_(void);
void	*_8_(void);

void	*_16_(void);
void	*_32_(void);
void	*_64_(void);
void	*_128_(void);
void	*_256_(void);

void	*_512_(void);
void	*_1024_(void);
void	*_2048_(void);
void	*_4096_(void);
void	*_8192_(void);

void	*_16384_(void);
void	*_32768_(void);
void	*_65536_(void);
void	*_131072_(void);
void	*_262144_(void);

// EEPROM util memory allocations

char	*_eeprom_0_(register int __recursive__);
char	*_eeprom_1_(register int __recursive__);
char	*_eeprom_2_(register int __recursive__);
char	*_eeprom_4_(register int __recursive__);
char	*_eeprom_8_(register int __recursive__);

char	*_eeprom_16_(register int __recursive__);
char	*_eeprom_32_(register int __recursive__);
char	*_eeprom_64_(register int __recursive__);
char	*_eeprom_128_(register int __recursive__);
char	*_eeprom_256_(register int __recursive__);

char	*_eeprom_512_(register int __recursive__);
char	*_eeprom_1024_(register int __recursive__);
char	*_eeprom_2048_(register int __recursive__);
char	*_eeprom_4096_(register int __recursive__);
char	*_eeprom_8192_(register int __recursive__);

char	*_eeprom_16384_(register int __recursive__);
char	*_eeprom_32768_(register int __recursive__);
char	*_eeprom_65536_(register int __recursive__);
char	*_eeprom_131072_(register int __recursive__);
char	*_eeprom_262144_(register int __recursive__);

void	*ft_malloc(register int size);

/*
 * I wish i can add more stuffs in it like custom error/warning systems
 *     via using "#define"s, but norminette is restricts me a lot.
 */

#endif
