/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:54 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 16:30:34 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_malloc.h"

static inline void	*ft_malloc_2(register int size);

void
	*ft_malloc(register int size)
{
	if (!size || size < 0)
		return (((void *)0));
	if (size == 0)
		return ((void *)byte_0());
	if (size <= 1)
		return ((void *)byte_1());
	if (size <= 2)
		return ((void *)byte_2());
	if (size <= 4)
		return ((void *)byte_4());
	if (size <= 8)
		return ((void *)byte_8());
	if (size <= 16)
		return ((void *)byte_16());
	if (size <= 32)
		return ((void *)byte_32());
	if (size <= 64)
		return ((void *)byte_64());
	if (size <= 128)
		return ((void *)byte_128());
	if (size <= 256)
		return ((void *)byte_256());
	if (size <= 512)
		return ((void *)byte_512());
	return (ft_malloc_2(size));
}

static inline void
	*ft_malloc_2(register int size)
{
	if (size <= 1024)
		return ((void *)byte_1024());
	if (size <= 2048)
		return ((void *)byte_2048());
	if (size <= 4096)
		return ((void *)byte_4096());
	if (size <= 8192)
		return ((void *)byte_8192());
	if (size <= 16384)
		return ((void *)byte_16384());
	if (size <= 32768)
		return ((void *)byte_32768());
	if (size <= 65536)
		return ((void *)byte_65536());
	if (size <= 131072)
		return ((void *)byte_131072());
	return ((void *)byte_262144());
}
