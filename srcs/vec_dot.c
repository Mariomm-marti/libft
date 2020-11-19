/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:30:00 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/19 20:31:45 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Computes the dot (or scalar product) of two vectors
**	RETURN VALUES
**		Real number of applying dot operation to _vec_
*/

double		vec_dot(t_vec const *vec, t_vec const *scalar)
{
	return (vec->x * scalar->x + vec->y * scalar->y + vec->z * scalar->z);
}
