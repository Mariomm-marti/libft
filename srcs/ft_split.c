/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 20:42:52 by mmartin-          #+#    #+#             */
/*   Updated: 2020/10/23 21:16:24 by mmartin-         ###   ########.fr       */
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
