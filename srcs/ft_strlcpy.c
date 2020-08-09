/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:38:48 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/09 10:44:42 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Copy up to _dstsize_ bytes from _src_ to _dst_ and NUL-terminate _dst_
**	RETURN VALUES
**		Returns the length of _src_
*/

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	count;
	size_t	srclen;

	if (!src)
		return (0);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	count = 0;
	while (count < dstsize - 1 && *(src + count))
	{
		*(dst + count) = *(src + count);
		++count;
	}
	*(dst + count) = 0;
	return (srclen);
}
