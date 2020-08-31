/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 20:59:02 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 18:55:34 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Converts _str_ to int, following the isspace rules
**	RETURN VALUES
**		Return the number _str_ in int format
*/

int		ft_atoi(char const *str)
{
	long	result;
	int		sign;

	result = 0;
	if (!str)
		return (0);
	while (ft_isspace(*str))
		str++;
	sign = *str == '-' ? -1 : 1;
	str += *str == '-' || *str == '+';
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - 48);
		if ((result * sign) > INT_MAX)
			return (-1);
		if ((result * sign) < INT_MIN)
			return (0);
		str++;
	}
	return ((int)result * sign);
}
