/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:38:48 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/10 18:17:58 by mmartin-         ###   ########.fr       */
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
	size_t count;

	count = 0;
	while (count < dstsize && *(const char *)(src + count))
	{
		*(char *)(dst + count) = *(const char *)(src + count);
		count++;
	}
	*(char *)(dst + count) = 0;
	count = 0;
	while (*(const char *)(src + count))
		count++;
	return (count);
}
