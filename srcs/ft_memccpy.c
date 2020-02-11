/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:37:27 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/16 10:51:17 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Copy _n_ bytes from _src_ to _dst_ until _c_ is found
**	RETURN VALUE
**		Returns NULL if _c_ is not found or byte after _c_ in _dst_
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t count;

	if (dst == NULL && src == NULL)
		return (NULL);
	count = 0;
	while (count < n)
	{
		*(unsigned char*)(dst + count) = *(const unsigned char*)(src + count);
		if (*(unsigned char*)(src + count) == (unsigned char)c)
			return (dst + count + 1);
		count++;
	}
	return (NULL);
}