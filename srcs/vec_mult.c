/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:32:12 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/16 22:34:53 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Multiply _vec_ by _factor_, not saving _vec_ and updating it values.
**		To preserve the original _vec_, consider using vec_clone
**	RETURN VALUES
**		_vec_ once updated
*/

t_vec		*vec_mult(t_vec const *vec, double const factor)
{
	vec->x = vec->x * factor;
	vec->y = vec->y * factor;
	vec->z = vec->z * factor;
	return (vec);
}
