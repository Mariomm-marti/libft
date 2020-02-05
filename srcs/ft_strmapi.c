/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:28:26 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/16 14:19:33 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	char			*str;

	if (!s)
		return (NULL);
	if ((str = (char *)malloc(ft_strlen(s) + 1)) == NULL)
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
