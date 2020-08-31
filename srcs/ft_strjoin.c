/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 12:43:49 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 20:01:15 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Copy _s1_ and _s2_ into a malloc copy
**	RETURN VALUES
**		Returns the copy of _s1_ and _s2_ into only one string
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*alloc;
	char	*alloch;

	if (!s1 || !s2)
		return (NULL);
	if (!(alloc = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	alloch = alloc;
	while (*s1)
		*alloc++ = *s1++;
	while (*s2)
		*alloc++ = *s2++;
	*alloc = 0;
	return (alloch);
}
