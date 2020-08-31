/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 10:49:47 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 19:09:29 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Writes _len_ bytes at _b_ using char _c_
**	RETURN VALUES
**		Returns _b_
*/

void	*ft_memset(void *b, int const c, size_t len)
{
	if (!b || !len)
		return (b);
	while (--len > 0)
		*(t_byte *)(b + len) = (t_byte)c;
	*(t_byte *)b = (t_byte)c;
	return (b);
}
