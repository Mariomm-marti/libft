/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_clone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:07:16 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/16 20:32:29 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Clones a vector from _in_ without freeing the _in_ vector
**	RETURN VALUES
**		NULL if allocation fails or _in_ is NULL, otherwise copy of input
*/

t_vec		*vec_clone(t_vec const *in)
{
	t_vec	*out;

	if (!in || !(out = (t_vec *)malloc(sizeof(t_vec *))))
		return (NULL);
	out->x = in->x;
	out->y = in->y;
	out->z = in->z;
	return (out);
}
