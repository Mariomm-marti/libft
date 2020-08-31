/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:13:12 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 19:06:48 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Finds first ocurrence of _c_ in the first _n_ bytes of _s_, if not
**		found, return NULL
**	RETURN VALUE
**		Returns first ocurrence of _c_ in _s_, or NULL if not found
*/

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t count;

	if (!s)
		return (NULL);
	count = 0;
	while (count < n)
	{
		if (*(t_byte *)(s + count) == (t_byte)c)
			return ((void *)s + count);
		count++;
	}
	return (NULL);
}
