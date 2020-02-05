/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:48:31 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/16 14:10:22 by mmartin-         ###   ########.fr       */
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

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t count;

	count = 0;
	while (count < n && (*(s1 + count) || *(s2 + count)))
	{
		if (*(unsigned char *)(s1 + count) != *(unsigned char *)(s2 + count))
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		count++;
	}
	return (0);
}
