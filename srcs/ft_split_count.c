/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 21:19:34 by mmartin-          #+#    #+#             */
/*   Updated: 2020/10/23 21:36:41 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stddef.h>

/*
**	DESCRIPTION
**		Counts the number of words splitted using ft_split
**	RETURN VALUES
**		0 means NULL input or no words found. Any other value is the number
**		of counted words
*/

int		ft_split_count(char **tab)
{
	int		count;

	if (!tab)
		return (0);
	count = 0;
	while (*(tab + count))
		count++;
	return (count);
}
