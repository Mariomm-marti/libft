/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:57:56 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/10 16:32:22 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Finds last ocurrence of _c_ in _s_
**	RETURN VALUES
**		Returns index of last found _c_ in _s_, or NULL if not found
*/

char	*ft_strrchr(const char *s, int c)
{
	int last_index;
	int count;

	last_index = -1;
	count = 0;
	while (s[count])
	{
		if (s[count] == (char)c)
			last_index = count;
		count++;
	}
	if (s[count] == (char)c)
		last_index = count;
	return ((last_index != -1) ? (char *)(s + last_index) : NULL);
}
