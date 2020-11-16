/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftmath.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:58:21 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/16 22:35:07 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTMATH_H
# define LIBFTMATH_H

typedef struct	s_vec
{
	double			x;
	double			y;
	double			z;
}				t_vec;

t_vec			*vec_clone(t_vec const *in);
t_vec			*vec_add(t_vec const *vec, t_vec const *add);
t_vec			*vec_sub(t_vec const *vec, t_vec const *sub);
t_vec			*vec_mult(t_vec const *vec, double factor);
t_vec			*vec_cross(t_vec const *vec, t_vec const *crossed);
double			vec_scale(t_vec const *vec, t_vec const *scalar);
double			vec_length(t_vec const *vec);
void			vec_normalize(t_vec const *vec);

#endif
