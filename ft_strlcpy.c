/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:38:48 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/15 14:30:35 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Copy up to _dstsize_ bytes from _src_ to _dst_ and NUL-terminate _dst_
**	RETURN VALUES
**		Returns the length of _src_
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	srclen;

	if (src == NULL)
		return (0);
	srclen = 0;
	while (*(const char *)(src + srclen))
		srclen++;
	if (dstsize == 0)
		return (srclen);
	count = -1;
	while (++count < dstsize - 1 && *(const char *)(src + count))
		*(char *)(dst + count) = *(const char *)(src + count);
	*(char *)(dst + count) = 0;
	return (srclen);
}
