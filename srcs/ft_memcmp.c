/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:50:01 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/22 12:01:21 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Compares _n_ bytes from _s1_ to _s2_
**	RETURN VALUES
**		Return difference between _s1_ and _s2_ or 0 if they are equal
*/

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t	count;

	if (!s1 && !s2)
		return (0);
	count = 0;
	while (count < n)
	{
		if (*(t_byte *)(s1 + count) != *(t_byte *)(s2 + count))
			return (*(t_byte *)(s1 + count) - *(t_byte *)(s2 + count));
		count++;
	}
	return (0);
}
