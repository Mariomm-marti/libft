/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:45:41 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/22 11:00:32 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Finds first ocurrence of _c_ in _s_
**	RETRUN VALUES
**		Returns first ocurrence of _c_ in _s_ or NULL if not found
*/

char	*ft_strchr(char const *s, int c)
{
	size_t	count;

	count = 0;
	while (s && *(s + count))
	{
		if (*(s + count) == (char)c)
			return ((char *)(s + count));
		count++;
	}
	if (s && (char)c == 0)
		return ((char *)(s + count));
	return (NULL);
}
