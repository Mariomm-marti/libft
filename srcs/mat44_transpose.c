/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_transpose.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:12:38 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/02 20:36:26 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Transposes given matrix _t_ into _out_
**	RETURN VALUES
**		None
*/

void		mat44_transpose(t_mat44 out, t_mat44 const t)
{
	unsigned char	i;
	unsigned char	j;

	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
			out[i][j] = t[j][i];
}
