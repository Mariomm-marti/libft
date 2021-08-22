/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 12:09:51 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/21 20:44:02 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		This function creates a new str from the given _s_. First checks
**		for real length (checking that _s_ + _start_ + _len_ doesn't overflow).
**		Then allocates memory with malloc and copy contents from _s_
**	RETURN VALUES
**		Returns allocated memory that should be free when not used
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*allocated;
	size_t	count;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	allocated = malloc(len + 1);
	if (allocated == NULL)
		return (NULL);
	count = 0;
	while (count < len)
	{
		*(allocated + count) = *(s + count + start);
		count++;
	}
	*(allocated + count) = 0;
	return (allocated);
}
