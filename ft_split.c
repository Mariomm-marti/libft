/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:25:15 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/16 15:33:55 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Internal function used to calculate the number of words of a string,
**		a word means a group of characters delimited by _c_
**	RETURN VALUES
**		Returns the number of words at _c_
*/

static int	get_word_number(const char *s, char c)
{
	size_t count;

	count = (*s == c ? 0 : 1);
	while (*s)
		if (*s == c && *(s + 1) != c && *(s + 1) != 0)
			++count && ++s;
		else
			++s;
	return (count);
}

/*
**	DESCRIPTION
**		Finds in _s_ the next word after _index_, return NULL if no words
**		are found
**	RETURN VALUES
**		Next word, NULL if not found
*/

static char	*get_next_word(const char *s, char c, size_t *index)
{
	size_t	find_next;
	char	*word;

	while (*(s + *index) == c && *(s + *index))
		*index = *index + 1;
	if (*(s + *index) == 0)
		return (NULL);
	find_next = *index;
	while (*(s + find_next + 1) != c && *(s + find_next + 1))
		find_next++;
	word = ft_substr(s, *index, find_next - *index + 1);
	*index = find_next + 1;
	return (word);
}

/*
**	DESCRIPTION
**		Splits a string _s_ with the delimiter _c_
**	RETURN VALUES
**		List of strings terminated with NULL
*/

char		**ft_split(const char *s, char c)
{
	size_t	index;
	size_t	count;
	char	**tab;

	if (!s || !(tab = (char **)malloc(sizeof(char *) *
					(get_word_number(s, c) + 1))))
		return (NULL);
	index = 0;
	count = 0;
	while ((*(tab + count) = get_next_word(s, c, &index)) != NULL)
		count++;
	return (tab);
}
