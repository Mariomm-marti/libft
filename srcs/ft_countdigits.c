/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:57:47 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/27 05:41:34 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Counts the number of digits in _num_
**	RETURN VALUES
**		Returns the number of digits for _num_, or zero.
*/

size_t		ft_countdigits(int num)
{
	t_byte	neg;

	neg = num < 0;
	if (num < 0)
		num = num == INT_MIN ? INT_MAX : -num;
	if (num < 10)
		return (1 + neg);
	if (num < 100)
		return (2 + neg);
	if (num < 1000)
		return (3 + neg);
	if (num < 10000)
		return (4 + neg);
	if (num < 100000)
		return (5 + neg);
	if (num < 1000000)
		return (6 + neg);
	if (num < 10000000)
		return (7 + neg);
	if (num < 100000000)
		return (8 + neg);
	if (num < 1000000000)
		return (9 + neg);
	return (10 + neg);
}
