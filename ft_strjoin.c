/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 12:43:49 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/15 15:15:19 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Copy _s1_ and _s2_ into a malloc copy
**	RETURN VALUES
**		Returns the copy of _s1_ and _s2_ into only one string
*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	count;
	size_t	count_s2;
	char	*alloc;

	if (!s1 || !s2)
		return (NULL);
	if ((alloc = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
		return (NULL);
	count = 0;
	while (*(s1 + count))
	{
		*(alloc + count) = *(s1 + count);
		++count;
	}
	count_s2 = 0;
	while (*(s2 + count_s2))
	{
		*(alloc + count) = *(s2 + count_s2);
		++count && ++count_s2;
	}
	*(alloc + count) = 0;
	return (alloc);
}
