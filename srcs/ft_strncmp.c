/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:48:31 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 20:06:36 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Finds if there are differences between _s1_ and _s2_ and return the
**		difference
**	RETURN VALUES
**		Return the difference between _s1_ and _s2_ or zero if none is found
*/

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t count;

	if (!s1 || !s2)
		return (0);
	count = 0;
	while (count < n && (*(s1 + count) || *(s2 + count)))
	{
		if (*(s1 + count) != *(s2 + count))
			return (*(t_byte *)(s1 + count) - *(t_byte *)(s2 + count));
		count++;
	}
	return (0);
}
