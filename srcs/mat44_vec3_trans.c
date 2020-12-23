/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_vec3_trans.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:03:09 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/02 20:37:04 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Transforms _out_ from _b_ using matrix _a_
**	RETURN VALUES
**		None
*/

void	mat44_vec3_trans(t_vec3 out, t_mat44 const a, t_vec3 const b)
{
	out[0] = b[0] * a[0][0] + b[1] * a[1][0] + b[2] * a[2][0];
	out[1] = b[0] * a[0][1] + b[1] * a[1][1] + b[2] * a[2][1];
	out[2] = b[0] * a[0][2] + b[1] * a[1][2] + b[2] * a[2][2];
}
