/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:07:22 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/09 10:27:59 by mmartin-         ###   ########.fr       */
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
	if (!dst || !src)
		return (dst);
	while (--n >= 1)
		*(unsigned char *)(dst + n) = *(unsigned char const *)(src + n);
	*(unsigned char *)dst = *(unsigned char const *)src;
	return (dst);
}
