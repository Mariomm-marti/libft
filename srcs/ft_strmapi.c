/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:28:26 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 20:01:37 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

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
