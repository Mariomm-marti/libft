/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:03:10 by mmartin-          #+#    #+#             */
/*   Updated: 2021/01/30 19:40:30 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Substracts _b_ from _a_
**	RETURN VALUES
**		None
*/

void		vec3_sub(t_vec3 out, t_vec3 const a, t_vec3 const b)
{
	out[0] = b[0] - a[0];
	out[1] = b[1] - a[1];
	out[2] = b[2] - a[2];
}
