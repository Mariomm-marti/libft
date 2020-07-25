/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 19:59:58 by mmartin-          #+#    #+#             */
/*   Updated: 2020/07/26 01:48:42 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Calculates logarithm of base _base_, and returns floor number
**		so that 5.9 would become 5
**	RETURN VALUES
**		Logarithm of _num_
*/

int		ft_logn(t_byte const base, unsigned long int const num)
{
	unsigned long int	current_num;
	t_byte				steps;

	current_num = base;
	steps = 0;
	while (current_num <= num && (current_num *= base))
		steps++;
	return (steps);
}
