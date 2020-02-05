/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 10:49:47 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/16 10:31:18 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Writes _len_ bytes at _b_ with _c_
**	RETURN VALUES
**		Returns _b_
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t count;

	count = 0;
	while (count < len)
	{
		*(unsigned char*)(b + count) = (unsigned char)c;
		count++;
	}
	return (b);
}
