/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veclen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 21:41:29 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/14 22:16:30 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"
#include <math.h>

/*
**	DESCRIPTION
**		Calculates the length of the given vector _vec_
**	RETURN VALUES
**		Magnitude of the given _vec_
*/

double		vec_length(t_vec const *vec)
{
	return (sqrt(vec->x * vec->x + vec->y * vec->y + vec->z * vec->z));
}
