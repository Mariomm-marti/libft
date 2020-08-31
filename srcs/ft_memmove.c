/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 13:02:17 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 19:08:52 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Copy from _src_ into a temporary buffer, then copy the buffer
**		into _dst_.
**		This is done to avoid memory overlapping
**	RETURN VALUE
**		Returns _dst_
*/

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	if (!dst || !src)
		return (NULL);
	if (len == 0)
		return (dst);
	while (dst > src && len-- > 0)
		*(t_byte *)(dst + len) = *(t_byte const *)(src + len);
	if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
