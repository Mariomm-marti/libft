/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 22:19:12 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/08 22:44:02 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Allocates up to _count_ * _size_ memory with malloc and initialize
**		each byte to zero
**	RETURN VALUES
**		Pointer to allocated memory
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;
	int		total;

	if ((alloc = (t_byte *)malloc(count * size)) == NULL)
		return (NULL);
	total = count * size;
	while (total > 0)
	{
		total--;
		*(t_byte*)(alloc + total) = 0;
	}
	return (alloc);
}
