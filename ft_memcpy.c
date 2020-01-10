/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 12:07:22 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/07 12:36:34 by mmartin-         ###   ########.fr       */
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
	while (n > 0)
	{
		n--;
		*(unsigned char *)(dst + n) = *(const unsigned char *)(src + n);
	}
	return (dst);
}
