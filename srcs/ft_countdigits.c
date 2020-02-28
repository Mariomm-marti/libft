/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:57:47 by mmartin-          #+#    #+#             */
/*   Updated: 2020/02/28 12:08:43 by mmartin-         ###   ########.fr       */
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
	size_t count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		count++;
	}
	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}
