/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_inverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:17:09 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/21 21:26:38 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"
#include <math.h>

static double	mat44_det33(t_vec3 const a, t_vec3 const b, t_vec3 const c)
{
	double	ret;

	ret = a[0] * (b[1] * c[2] - b[2] * c[1]);
	ret -= b[0] * (a[1] * c[2] - a[2] * c[1]);
	ret += c[0] * (a[1] * b[2] - a[2] * b[1]);
	return (ret);
}

static void		mat44_adjugate(t_mat44 out, t_mat44 const a)
{

}

/*
**	DESCRIPTION
**		Calculates the inverse of _a_ and places it into _out_.
**		Uses the 
**	RETURN VALUES
**		None
*/

//   a[0][0]	  a[1][0]	  a[2][0]	  a[3][0]
//   a[0][1]	  a[1][1]	  a[2][1]	  a[3][1]
//   a[0][2]	  a[1][2]	  a[2][2]	  a[3][2]
//   a[0][3]	  a[1][3]	  a[2][3]	  a[3][3]
//  id[0][0]	 id[1][0]	 id[2][0]	 id[3][0]
//  id[0][1]	 id[1][1]	 id[2][1]	 id[3][1]
//  id[0][2]	 id[1][2]	 id[2][2]	 id[3][2]
//  id[0][3]	 id[1][3]	 id[2][3]	 id[3][3]

int				mat44_inverse(t_mat44 out, t_mat44 const a)
{
	t_mat44		id;
}

int		main(void)
{
	t_mat44		mat = {{1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 1, 1}, {1, 5, 1, 1}};

	printf("%lf\n", mat44_det33((t_vec3){5, 7, 9}, (t_vec3){9, 8, 5}, (t_vec3){1, 4, -4}));
}
