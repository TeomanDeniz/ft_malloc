/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:54 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/16 18:15:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_malloc.h"

static inline void	*bigger_malloc(register int size);

void
	*ft_malloc(register int size)
{
	if (size < 0)
		return (((void *)0));
	if (size <= 16)
		return ((void *)_16_());
	if (size <= 32)
		return ((void *)_32_());
	if (size <= 64)
		return ((void *)_64_());
	if (size <= 128)
		return ((void *)_128_());
	if (size <= 256)
		return ((void *)_256_());
	if (size <= 512)
		return ((void *)_512_());
	if (size <= 1024)
		return ((void *)_1024_());
	if (size <= 2048)
		return ((void *)_2048_());
	if (size <= 4096)
		return ((void *)_4096_());
	if (size <= 8192)
		return ((void *)_8192_());
	return (bigger_malloc(size));
}

static inline void
	*bigger_malloc(register int size)
{
	if (size <= 16384)
		return ((void *)_16384_());
	if (size <= 32768)
		return ((void *)_32768_());
	if (size <= 65536)
		return ((void *)_65536_());
	if (size <= 131072)
		return ((void *)_131072_());
	if (size <= 262144)
		return ((void *)_262144_());
	(void)"Memory error? Yes: The chosen size is out of limit! Get good!";
	return ((void *)0);
}
