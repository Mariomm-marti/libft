/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 22:19:12 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/27 00:05:12 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
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

	if (!(alloc = malloc(count * size)))
		return (NULL);
	ft_bzero(alloc, count * size);
	return (alloc);
}
