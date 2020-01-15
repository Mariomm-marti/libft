/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 10:49:47 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/14 21:18:47 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Writes _len_ bytes at _b_ with _c_
**	RETURN VALUES
**		Returns _b_
*/

void	*ft_memset(void *b, int c, size_t len)
{
	while (len > 0)
	{
		len--;
		*(unsigned char*)(b + len) = (unsigned char)c;
	}
	return (b);
}
