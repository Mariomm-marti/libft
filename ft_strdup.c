/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:05:59 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/16 13:21:07 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Allocates memory for _s1_ length bytes and copy contents from _s1_ to
**		a heap clone
**	RETURN VALUES
**		Returns a pointer to the first address of the copy, or NULL if failed
*/

void	*ft_strdup(const char *s1)
{
	char	*copy;
	int		count;

	count = ft_strlen(s1);
	if ((copy = (char *)malloc(count + 1)) == NULL)
		return (NULL);
	count = 0;
	while (*(s1 + count))
	{
		*(copy + count) = *(s1 + count);
		count++;
	}
	*(copy + count) = 0;
	return (copy);
}
