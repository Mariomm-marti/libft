/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_dot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:10:27 by mmartin-          #+#    #+#             */
/*   Updated: 2020/11/25 21:13:20 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	DESCRIPTION
**		Calculates the dot or scalar product of _a_ and _b_
**	RETURN VALUES
**		Real number, scalar product of _a_ and _b_
*/

double		vec3_dot(t_vec3 const a, t_vec3 const b)
{
	return (a[0] * b[0] + a[1] * b[1] + a[2] * b[2]);
}
