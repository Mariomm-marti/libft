/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat44_init_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:48:01 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/23 15:44:53 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftmath.h"

/*
**	DESCRIPTION
**		Initializes matrix _out_ with _value_ for each field.
**		In most cases value will be 0 so this method is not required as
**		0 works as the default value
**	RETURN VALUES
**		None
*/

void		mat44_init_value(t_mat44 out, double const value)
{
	unsigned char	i;
	unsigned char	j;

	i = -1;
	while (++i < 4 && (j = -1))
		while (++j < 4)
			out[i][j] = value;
}
