/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_point_trans.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:15:17 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/21 12:15:26 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Places in _out_ a transformation of _b_ using matrix _a_.
**		It also handles translation
**	RETURN VALUES
**		None
*/

void		mat44_point_trans(t_vec3 out, t_mat44 const a, t_vec3 const b)
{
	double	w;

	out[0] = b[0] * a[0][0] + b[1] * a[1][0] + b[2] * a[2][0] + a[3][0];
	out[1] = b[0] * a[0][1] + b[1] * a[1][1] + b[2] * a[2][1] + a[3][1];
	out[2] = b[0] * a[0][2] + b[1] * a[1][2] + b[2] * a[2][2] + a[3][2];
	w = b[0] * a[3][0] + b[1] * a[3][1] + b[2] * a[3][2] + a[3][3];
	if (w != 1.0 && w != 0.0f)
	{
		w = 1 / w;
		out[0] = out[0] * w;
		out[1] = out[1] * w;
		out[2] = out[2] * w;
	}
}
