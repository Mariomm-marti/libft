/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 13:02:17 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/07 14:14:39 by mmartin-         ###   ########.fr       */
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
	char	srcbuff[32768];
	size_t	count;

	count = 0;
	while (count < len)
	{
		srcbuff[count] = *(const char*)(src + count);
		count++;
	}
	count = 0;
	while (count < len)
	{
		*(char*)(dst + count) = srcbuff[count];
		count++;
	}
	return (dst);
}
