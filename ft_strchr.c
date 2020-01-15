/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:45:41 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/15 12:07:31 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Finds first ocurrence of _c_ in _s_
**	RETRUN VALUES
**		Returns first ocurrence of _c_ in _s_ or NULL if not found
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if (*s == (char)c)
			return ((char *)s);
		else
			s++;
	if ((char)c == 0)
		return ((char *)s);
	return (NULL);
}
