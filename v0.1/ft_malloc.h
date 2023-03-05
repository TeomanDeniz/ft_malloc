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
# define FT_MALLOC_H 0.1 // Version

// Main memroy allocations

char	*_0_(void);
char	*_1_(void);
char	*_2_(void);
char	*_4_(void);
char	*_8_(void);

char	*_16_(void);
char	*_32_(void);
char	*_64_(void);
char	*_128_(void);
char	*_256_(void);

char	*_512_(void);
char	*_1024_(void);
char	*_2048_(void);
char	*_4096_(void);
char	*_8192_(void);

char	*_16384_(void);
char	*_32768_(void);
char	*_65536_(void);
char	*_131072_(void);
char	*_262144_(void);

int		search_memory(const char *memory, register int size);

void	*ft_malloc(register int size);

/*
 * I wish i can add more stuffs in it like custom error/warning systems
 *     via using "#define"s, but norminette is restricts me a lot.
 */

#endif
