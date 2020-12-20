/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_init_identity.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:38:03 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/20 16:58:10 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Creates an identity matrix and places it in _out_. An identity
**		matrix is a matrix with orthonormal values. libftmath assumes
**		you are using a column major notation
**	RETURN VALUES
**		None
*/

void	mat44_init_identity(t_mat44 out)
{
	char	count;

	count = -1;
	while (++count < 4)
		out[count][count] = 1;
}
