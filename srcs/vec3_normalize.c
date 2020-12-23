/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:14:47 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/23 13:59:54 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"
#include <math.h>

/*
**	DESCRIPTION
**		Normalizes given _a_ and places it into _out_
**	RETURN VALUES
**		None
*/

void		vec3_normalize(t_vec3 out, t_vec3 const vec)
{
	double		a_len;

	a_len = vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2];
	if (a_len > 0)
	{
		a_len = 1 / sqrt(a_len);
		out[0] = vec[0] * a_len;
		out[1] = vec[1] * a_len;
		out[2] = vec[2] * a_len;
		return ;
	}
	out[0] = vec[0];
	out[1] = vec[1];
	out[2] = vec[2];
}
