/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:07:22 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/25 14:23:30 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Copy _n_ bytes from _src_ to _dst_
**	RETURN VALUE
**		Returns _dst_
*/

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t	count;

	if (!dst || !src || !n)
		return (dst);
	count = 0;
	while (count < n)
	{
		*(t_byte *)(dst + count) = *(t_byte const *)(src + count);
		count++;
	}
	return (dst);
}
