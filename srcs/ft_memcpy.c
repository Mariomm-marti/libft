/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:07:22 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/14 20:15:58 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Copy _n_ bytes from _src_ to _dst_
**	RETURN VALUE
**		Returns _dst_
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;

	if (n == 0 || dst == src)
		return (dst);
	count = 0;
	while (count < n)
	{
		*(unsigned char *)(dst + count) = *(const unsigned char *)(src + count);
		count++;
	}
	return (dst);
}
