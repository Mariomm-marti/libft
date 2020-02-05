/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 13:56:24 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/16 14:48:46 by mmartin-         ###   ########.fr       */
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
	size_t x;
	size_t y;

	if (!s1 || !set)
		return (NULL);
	x = 0;
	while (*(s1 + x) && ft_strchr(set, *(s1 + x)))
		x++;
	y = ((int)ft_strlen(s1) - 1 >= 0 ? ft_strlen(s1) - 1 : 0);
	while (y > 0 && y > x && ft_strchr(set, *(s1 + y)))
		y--;
	return (ft_substr(s1, x, y - x + 1));
}
