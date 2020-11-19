/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_cross.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:41:59 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/19 20:28:17 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Modifies _vec_ WITHOUT saving the previous content, use vec_clone
**		to preserve the original one while modifying the copy, example:
**
**		t_vec	*copy;
**		copy = vec_cross(vec_clone(in), crossing);
**
**		Note that you never pass in as parameter, but a copy of in
**	RETURN VALUES
**		None
*/

void		vec_cross(t_vec const *vec, t_vec const *crossed)
{
	double const	x = vec->x;
	double const	y = vec->y;
	double const	z = vec->z;

	vec->x = y * crossed->z - z * crossed->y;
	vec->y = z * crossed->x - x * crossed->z;
	vec->z = x * crossed->y - y * crossed->x;
}
