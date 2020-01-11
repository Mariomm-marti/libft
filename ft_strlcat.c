/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:02:11 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/11 11:23:23 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Concatenataes in safe way _src_ to _dst_, appending 0 at the end
**	RETURN VALUES
**		Return length of _src_ if _dstsize_ is less than _src_ length or
**		total length of produced string
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	count;

	dstlen = 0;
	while (dst[dstlen])
		dstlen++;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (dstsize == 0)
		return (srclen);
	if (dstsize < dstlen)
		return (dstsize + srclen);
	count = 0;
	while (count + dstlen < dstsize - 1 && src[count])
	{
		dst[count + dstlen] = src[count];
		count++;
	}
	if (count + dstlen < dstsize)
		dst[count + dstlen] = 0;
	return (srclen + dstlen);
}
