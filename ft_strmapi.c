/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:28:26 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/15 14:49:13 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	char			*str;

	if (!s)
		return (NULL);
	count = 0;
	if ((str = ft_strdup(s)) == NULL)
		return (NULL);
	while (*(str + count))
	{
		*(str + count) = f(count, *(str + count));
		++count;
	}
	return (str);
}
