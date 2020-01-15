/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:02:11 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/14 21:01:30 by mmartin-         ###   ########.fr       */
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
	size_t	len;
	size_t	count;

	len = (ft_strlen(dst) < dstsize ? ft_strlen(dst) : dstsize);
	count = len;
	while (*(char *)(src + count - len) && count + 1 < dstsize)
	{
		*(dst + count) = *(src + count - len);
		++count;
	}
	if (len < dstsize)
		*(dst + count) = 0;
	return (len + ft_strlen(src));
}
