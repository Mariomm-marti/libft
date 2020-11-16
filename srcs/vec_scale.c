/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_scale.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 22:03:11 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/16 20:41:44 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Computes the dot (or scalar product) of two vectors
**	RETURN VALUES
**		Real number of applying dot operation to _vec_
*/

double		vec_scale(t_vec const *vec, t_vec const *scalar)
{
	return (vec->x * scalar->x + vec->y * scalar->y + vec->z * scalar->z);
}
