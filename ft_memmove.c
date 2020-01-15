/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 13:02:17 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/15 11:33:02 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Copy from _src_ into a temporary buffer, then copy the buffer
**		into _dst_.
**		This is done to avoid memory overlapping
**	RETURN VALUE
**		Returns _dst_
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((dst == NULL && src == NULL))
		return (NULL);
	if (dst > src)
		while (len-- > 0)
			*(t_byte *)(dst + len) = *(const t_byte *)(src + len);
	else if (dst < src)
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
