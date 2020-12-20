/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_inverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:17:09 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/20 17:45:33 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

static void	mat44_swap_column(t_mat44 mat, char first, char second)
{
	double	temp;

	temp = mat[first][0];
	mat[first][0] = mat[second][0];
	mat[second][0] = temp;
	temp = mat[first][1];
	mat[first][1] = mat[second][1];
	mat[second][1] = temp;
	temp = mat[first][2];
	mat[first][2] = mat[second][2];
	mat[second][2] = temp;
	temp = mat[first][3];
	mat[first][3] = mat[second][3];
	mat[second][3] = temp;
}

static void	mat44_

/*
**	DESCRIPTION
**		Calculates the inverse of _a_ and places it into _out_.
**		The method used to get the inverse if the Gauss-Jordan elimination,
**		which mainly concept is to reduce rows
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

void		mat44_inverse(t_mat44 out, t_mat44 const a)
{
	t_mat44		id;

	mat44_init_identity(id);
}
