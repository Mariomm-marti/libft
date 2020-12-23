/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftmath.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:58:21 by mmartin-          #+#    #+#             */
/*   Updated: 2020/12/23 13:48:13 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTMATH_H
# define LIBFTMATH_H

typedef double	t_vec3[3];
typedef double	t_mat44[4][4];

double			vec3_dot(t_vec3 const a, t_vec3 const b);
double			vec3_len(t_vec3 const in);
void			vec3_add(t_vec3 out, t_vec3 const a, t_vec3 const b);
void			vec3_sub(t_vec3 out, t_vec3 const a, t_vec3 const b);
void			vec3_mult(t_vec3 out, t_vec3 const vec, double const factor);
void			vec3_normalize(t_vec3 out, t_vec3 const vec);
void			vec3_cross(t_vec3 out, t_vec3 const a, t_vec3 const b);

int				mat44_inverse(t_mat44 out, t_mat44 const a);
void			mat44_init_identity(t_mat44 out);
void			mat44_init_value(t_mat44 out, double const value);
void			mat44_mult(t_mat44 out, t_mat44 const a, t_mat44 const b);
void			mat44_transpose(t_mat44 out, t_mat44 const t);
void			mat44_point_trans(t_vec3 out, t_mat44 const a, t_vec3 const b);
void			mat44_vec3_trans(t_vec3 out, t_mat44 const a, t_vec3 const b);

#endif
