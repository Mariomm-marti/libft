/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 21:17:12 by mmartin-          #+#    #+#             */
/*   Updated: 2020/10/26 02:59:46 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

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
		return (0);
	count = 0;
	while (*(tab + count))
	{
		free(*(tab + count));
		count++;
	}
	free(tab);
	return (1);
}
