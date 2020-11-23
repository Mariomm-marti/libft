/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:21:10 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/21 22:52:52 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Add values and place them in _out_, if _vec_ is not longer neeeded
**		give _out_ as _vec_ so it is modified
**	RETURN VALUES
**		None
*/

void		vec_add(t_vec *out, t_vec const *vec, t_vec const *add)
{
	vec->x = vec->x + add->x;
	vec->y = vec->y + add->y;
	vec->z = vec->z + add->z;
}
