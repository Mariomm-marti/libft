/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:57:56 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/21 20:44:48 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Finds last ocurrence of _c_ in _s_
**	RETURN VALUES
**		Returns index of last found _c_ in _s_, or NULL if not found
*/

char	*ft_strrchr(char const *s, int c)
{
	int	count;

	count = ft_strlen(s);
	while (count >= 0)
	{
		if (*(s + count) == (char)c)
			return ((char *)(s + count));
		count--;
	}
	return (NULL);
}
