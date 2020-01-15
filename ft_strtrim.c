/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 13:56:24 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/15 14:40:31 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Trims using _set_ the beginning and the end _s1_ and uses ft_substr
**		to create the trimmed string
**	RETURN VALUES
**		Trimmed string, or NULL if failed
*/

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t x;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	x = ft_strlen(s1);
	while (x > 0 && ft_strchr(set, *(s1 + x)))
		x--;
	return (ft_substr(s1, 0, x + 1));
}
