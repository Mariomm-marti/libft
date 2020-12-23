/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_mult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:53:42 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/25 22:34:31 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Multiplies A * B and places result in _out_
**	RETURN VALUES
**		None
*/

void		mat44_mult(t_mat44 out, t_mat44 const a, t_mat44 const b)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
			out[i][j] = b[i][0] * a[0][j] +
						b[i][1] * a[1][j] +
						b[i][2] * a[2][j] +
						b[i][3] * a[3][j];
}
