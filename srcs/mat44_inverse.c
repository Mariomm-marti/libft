/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_inverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:17:09 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/23 14:07:27 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

static double	mat44_det33(t_vec3 const a, t_vec3 const b, t_vec3 const c)
{
	double	ret;

	ret = a[0] * (b[1] * c[2] - b[2] * c[1]);
	ret -= b[0] * (a[1] * c[2] - a[2] * c[1]);
	ret += c[0] * (a[1] * b[2] - a[2] * b[1]);
	return (ret);
}

static void		mat44_adjoint(t_mat44 out, t_mat44 const a)
{
	short int const	tab[4][3] = {{1, 2, 3}, {0, 2, 3}, {0, 1, 3}, {0, 1, 2}};
	short int		i;
	short int		j;

	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
		{
			out[j][i] = mat44_det33((t_vec3){
					a[tab[i][0]][tab[j][0]],
					a[tab[i][0]][tab[j][1]],
					a[tab[i][0]][tab[j][2]]},
				(t_vec3){
					a[tab[i][1]][tab[j][0]],
					a[tab[i][1]][tab[j][1]],
					a[tab[i][1]][tab[j][2]]},
				(t_vec3){
					a[tab[i][2]][tab[j][0]],
					a[tab[i][2]][tab[j][1]],
					a[tab[i][2]][tab[j][2]]});
			if ((i + j) % 2)
				out[j][i] = -out[j][i];
		}
}

/*
**	DESCRIPTION
**		Calculates the inverse of _a_ and places it into _out_
**	RETURN VALUES
**		None
*/

int				mat44_inverse(t_mat44 out, t_mat44 const a)
{
	double				matrix_determinant;
	unsigned char		i;
	unsigned char		j;

	mat44_adjoint(out, a);
	matrix_determinant = a[0][0] * out[0][0] + a[1][0] * out[0][1] +
						a[2][0] * out[0][2] + a[3][0] * out[0][3];
	if (matrix_determinant == 0.0)
		return (0);
	matrix_determinant = 1 / matrix_determinant;
	i = 0;
	while (i < 4 && (j = 0))
	{
		while (++j < 4)
		{
			out[i][j] = out[i][j] * matrix_determinant;
			j++;
		}
		i++;
	}
	return (1);
}
