/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftmath.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:58:21 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/19 22:01:17 by mmartin-         ###   ########.fr       */
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

typedef double	t_mat44[16];

t_vec			*vec_clone(t_vec const *in);
double			vec_dot(t_vec const *vec, t_vec const *scalar);
double			vec_length(t_vec const *vec);
void			vec_normalize(t_vec const *vec);
void			vec_add(t_vec const *vec, t_vec const *add);
void			vec_sub(t_vec const *vec, t_vec const *sub);
void			vec_mult(t_vec const *vec, double factor);
void			vec_cross(t_vec const *vec, t_vec const *crossed);

#endif
