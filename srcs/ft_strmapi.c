/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:28:26 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/23 13:38:13 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Maps _s_ and, for each character, applies _f_ function which accepts
**		an unsigned int (character number in string) and the current char.
**		Returned string is heap-allocated
**	RETURN VALUES
**		None
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	char			*str;

	if (!s || !f)
		return ((char *)s);
	if (!(str = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	count = 0;
	while (*(s + count))
	{
		*(str + count) = f(count, *(s + count));
		count++;
	}
	*(str + count) = 0;
	return (str);
}
