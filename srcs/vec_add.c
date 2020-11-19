/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:21:10 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/19 20:27:02 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Adds _vec_ and _add_, not saving _vec_ and updating it values.
**		To preserve the original _vec_, consider using vec_clone
**	RETURN VALUES
**		None
*/

void		vec_add(t_vec const *vec, t_vec const *add)
{
	vec->x = vec->x + add->x;
	vec->y = vec->y + add->y;
	vec->z = vec->z + add->z;
}
