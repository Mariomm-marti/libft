/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:37:27 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/10 17:55:52 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Copy _n_ bytes from _src_ to _dst_ until _c_ is found
**	RETURN VALUE
**		Returns NULL if _c_ is not found or byte after _c_ in _dst_
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		*(unsigned char*)(dst + count) = *(const unsigned char*)(src + count);
		if (*(unsigned char*)(src + count) == (unsigned char)c)
			return (dst + n);
		count++;
	}
	return (NULL);
}
