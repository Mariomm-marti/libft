/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:43:45 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/16 13:28:03 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Tries to find _needle_ in _haystack_ at the first _len_ characters
**	RETURN VALUES
**		If _needle_ length is zero, return _haystack_. Otherwise first char
**		of _needle_ in _haystack_ or NULL if not found
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	foundlen;

	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	foundlen = ft_strlen(needle);
	if (foundlen == 0)
		return ((char *)haystack);
	count = 0;
	while (*(haystack + count) && foundlen <= len--)
	{
		if (!ft_strncmp((char *)(haystack + count), (char *)needle, foundlen))
			return ((char *)(haystack + count));
		count++;
	}
	return (NULL);
}
