/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:05:15 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/21 20:40:51 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"
#include <math.h>

/*
**	DESCRIPTION
**		Gets the length of _in_
**	RETURN VALUES
**		Real number, length of _in_
*/

double	vec3_len(t_vec3 const in)
{
	return (sqrt(in[0] * in[0] + in[1] * in[1] + in[2] * in[2]));
}
