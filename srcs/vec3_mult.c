/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_mult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 22:24:42 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/23 13:59:44 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Scales a vector _vec_
**	RETURN VALUES
**		None
*/

void		vec3_mult(t_vec3 out, t_vec3 const vec, double const factor)
{
	out[0] = vec[0] * factor;
	out[1] = vec[1] * factor;
	out[2] = vec[2] * factor;
}
