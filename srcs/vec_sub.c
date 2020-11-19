/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_sub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:29:20 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/19 20:30:29 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Substracts _sub_ from _vec_, not saving original _vec_ and updating
**		it values. To preserve the original _vec_, consider using vec_clone
**	RETURN VALUES
**		None
*/

void		vec_sub(t_vec const *vec, t_vec const *sub)
{
	vec->x = vec->x - sub->x;
	vec->y = vec->y - sub->y;
	vec->z = vec->z - sub->z;
}
