/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_inverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:17:09 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/22 22:10:46 by mmartin-         ###   ########.fr       */
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
	char const	tab[4][3] = {{1, 2, 3}, {0, 2, 3}, {0, 1, 3}, {0, 1, 2}};
	t_mat44		temp;
	char		i;
	char		j;

	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
		{
			temp[i][j] = mat44_det33((t_vec3){
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
				temp[i][j] = -temp[i][j];
		}
	mat44_transpose(out, temp);
}

/*
**	DESCRIPTION
**		Calculates the inverse of _a_ and places it into _out_
**	RETURN VALUES
**		None
*/

int				mat44_inverse(t_mat44 out, t_mat44 const a)
{
	double		matrix_determinant;
	char		i;
	char		j;

	mat44_adjoint(out, a);
	matrix_determinant = a[0][0] * out[0][0] + a[1][0] * out[0][1] +
						a[2][0] * out[0][2] + a[3][0] * out[0][3];
	if (matrix_determinant == 0.0)
		return (0);
	matrix_determinant = 1 / matrix_determinant;
	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
			out[i][j] = out[i][j] * matrix_determinant;
	return (1);
}

int		main(int argc, char **argv)
{
	t_mat44		val = {{1, 9, 4, 6}, {-1, 3, 9.1157, 81.1}, {8325, -185, -17, -0.19}, {0, 0, 19, 4}};
	t_mat44		out;

	printf("%-20lf %-20lf %-20lf %-20lf\n", val[0][0], val[1][0], val[2][0], val[3][0]);
	printf("%-20lf %-20lf %-20lf %-20lf\n", val[0][1], val[1][1], val[2][1], val[3][1]);
	printf("%-20lf %-20lf %-20lf %-20lf\n", val[0][2], val[1][2], val[2][2], val[3][2]);
	printf("%-20lf %-20lf %-20lf %-20lf\n", val[0][3], val[1][3], val[2][3], val[3][3]);

	printf("Has inverse? %s\n", mat44_inverse(out, val) ? "true" : "false");
	printf("%-20lf %-20lf %-20lf %-20lf\n", out[0][0], out[1][0], out[2][0], out[3][0]);
	printf("%-20lf %-20lf %-20lf %-20lf\n", out[0][1], out[1][1], out[2][1], out[3][1]);
	printf("%-20lf %-20lf %-20lf %-20lf\n", out[0][2], out[1][2], out[2][2], out[3][2]);
	printf("%-20lf %-20lf %-20lf %-20lf\n", out[0][3], out[1][3], out[2][3], out[3][3]);
}

