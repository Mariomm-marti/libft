/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_normalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 21:28:39 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/15 21:28:42 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"
#include <math.h>

/*
**	DESCRIPTION
**		Returns normalized vector _vec_
**	RETURN VALUES
**		Normalized _vec_
*/

void		vec_normalize(t_vec const *vec)
{
	double		vlen;

	vlen = vec->x * vec->x + vec->y * vec->y + vec->z * vec->z;
	if (vlen > 0)
	{
		vlen = 1 / sqrt(vlen);
		vec->x = vec->x * vlen;
		vec->y = vec->y * vlen;
		vec->z = vec->z * vlen;
	}
	return (vec);
}
