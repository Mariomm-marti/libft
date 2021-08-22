/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:35:28 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/22 12:00:27 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Copies into dynamic memory the given content _s_ for _n_ bytes
**	RETURN VALUES
**		Returns _s_, copied in dynamic memory or NULL if allocation failed
*/

void	*ft_memdup(void const *s, int n)
{
	void	*dupped;

	dupped = malloc(n);
	if (dupped == NULL)
		return (NULL);
	while (--n >= 0)
		*((t_byte *)dupped + n) = *((t_byte *)s + n);
	return (dupped);
}
