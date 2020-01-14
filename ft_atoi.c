/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 20:59:02 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/13 12:48:39 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Converts _str_ to int, following the isspace rules
**	RETURN VALUES
**		Return the number _str_ in int format
*/

int		ft_atoi(const char *str)
{
	int			result;
	long int	resultl;
	int			sign;

	result = 0;
	resultl = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' ||
			*str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		resultl = resultl * 10 + (*str - 48);
		str++;
	}
	if (sign == -1 && result > resultl)
		return (0);
	if (sign == 1 && result != resultl)
		return (-1);
	return (result * sign);
}
