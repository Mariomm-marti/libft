/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:05:15 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/23 13:59:05 by mmartin-         ###   ########.fr       */
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

double		vec3_len(t_vec3 const in)
{
	return (sqrt(in[0] * in[0] + in[1] * in[1] + in[2] * in[2]));
}
