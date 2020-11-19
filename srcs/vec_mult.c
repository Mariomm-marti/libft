/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:32:12 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/19 20:29:05 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Multiply _vec_ by _factor_, not saving _vec_ and updating it values.
**		To preserve the original _vec_, consider using vec_clone
**	RETURN VALUES
**		None
*/

void		vec_mult(t_vec const *vec, double const factor)
{
	vec->x = vec->x * factor;
	vec->y = vec->y * factor;
	vec->z = vec->z * factor;
}
