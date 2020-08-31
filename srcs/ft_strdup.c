/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:05:59 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 19:17:08 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Allocates memory for _s1_ length bytes and copy contents from _s1_ to
**		a heap clone
**	RETURN VALUES
**		Returns a pointer to the first address of the copy, or NULL if failed
*/

void	*ft_strdup(char const *s1)
{
	char	*copy;
	int		count;

	if (!s1 || !(copy = (char *)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	count = -1;
	while (*(s1 + ++count))
		*(copy + count) = *(s1 + count);
	*(copy + count) = 0;
	return (copy);
}
