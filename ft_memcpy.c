/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:07:22 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/13 19:40:10 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Copy _n_ bytes from _src_ to _dst_
**	RETURN VALUE
**		Returns _dst_
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;

	if (dst == NULL && src == NULL)
		return (NULL);
	count = 0;
	while (count < n)
	{
		*(unsigned char *)(dst + count) = *(const unsigned char *)(src + count);
		count++;
	}
	return (dst);
}
