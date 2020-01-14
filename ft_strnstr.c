/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:43:45 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/11 18:17:35 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
**	DESCRIPTION
**		Tries to find _needle_ in _haystack_ at the first _len_ characters
**	RETURN VALUES
**		If _needle_ length is zero, return _haystack_. Otherwise first char
**		of _needle_ in _haystack_ or NULL if not found
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	foundlen;
	size_t	found;
	size_t	count;

	if (haystack == needle)
		return ((char *)haystack);
	foundlen = 0;
	while (needle[foundlen])
		foundlen++;
	if (foundlen == 0)
		return ((char *)haystack);
	count = 0;
	found = 0;
	while (*(haystack + count) && count <= len)
	{
		if (found == foundlen)
			return ((char *)haystack + count - foundlen);
		else if (haystack[count] == needle[found])
			++found;
		else if (found > 0)
			found = 0;
		count++;
	}
	return (NULL);
}
