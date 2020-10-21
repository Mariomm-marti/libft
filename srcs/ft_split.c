/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 20:42:52 by mmartin-          #+#    #+#             */
/*   Updated: 2020/10/21 20:21:30 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Allows to split _s_ using char _c_, ending in NULL pointer so it can
**		be easily free
**	RETURN VALUES
**		Returns either NULL in failure, or a char ** which is each string
**		heap-allocated
*/

char	**ft_split(int *word_count, char *s, char c)
{
	char	**tab;
	char	*word;
	int		i;

	if (!(word = s))
		return (NULL);
	*word_count = *s == c || !*s ? 0 : 1;
	while (*++s)
		if (*s == c && *(s + 1) && *(s + 1) != c)
			*word_count += 1;
	if (!(tab = (char **)malloc(sizeof(char *) * (*word_count + 1))))
		return (NULL);
	*(tab + *word_count) = NULL;
	s = word - 1;
	i = 0;
	while (*++s)
		if (*s != c && (word = ft_strchr(s, c)))
		{
			*(tab + i++) = ft_substr(s, 0, word - s);
			s = word;
		}
		else if (!word && (*(tab + i) = ft_substr(s, 0, ft_strchr(s, 0) - s)))
			break ;
	return (tab);
}

/*
**	DESCRIPTION
**		Easily free heap-allocated memory for ft_split
**	RETURN VALUES
**		Either 1 if failure or 0 if success
*/

int		ft_split_free(char **tab)
{
	size_t	count;

	if (!tab)
		return (1);
	count = 0;
	while (*(tab + count))
	{
		free(*(tab + count));
		count++;
	}
	free(tab);
	return (0);
}
