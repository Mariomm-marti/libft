/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 13:56:24 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/21 20:41:42 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Trims using _set_ the beginning and the end _s1_ and uses ft_substr
**		to create the trimmed string
**	RETURN VALUES
**		Trimmed string, or NULL if failed
*/

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	x;
	size_t	y;

	if (!s1 || !set)
		return (NULL);
	x = 0;
	while (*(s1 + x) && ft_strchr(set, *(s1 + x)))
		x++;
	y = 0;
	if ((int)ft_strlen(s1) - 1 >= 0)
		y = ft_strlen(s1) - 1;
	while (y > 0 && y > x && ft_strchr(set, *(s1 + y)))
		y--;
	return (ft_substr(s1, x, y - x + 1));
}
