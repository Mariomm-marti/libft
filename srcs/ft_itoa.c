/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 20:44:01 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 18:44:35 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

/*
**	DESCRIPTION
**		Future Mario this is a beautiful code so shut up and tell past Mario
**		to do the f* ft_split. :)
**			- Julen
**		Calloc initialize all to zero (cleans it), if number is zero simply
**		writes zero and returns.
**		If number is negative, writes a minus to memory and converts the number
**		to positive.
**		Then simply write the last number to memory and substract one (so the
**		whole number is inserted).
**		If the original number is negative, one more byte is moved to the left
**		so the pointer is set to the negative symbol
**	RETURN VALUES
**		Converted number to ASCII malloc string
*/

char		*ft_itoa(int n)
{
	int		count;
	char	*str;

	if (n == INT_MIN || !(str = (char *)ft_calloc(1, ft_countdigits(n) + 1)))
		return (n == INT_MIN ? ft_strdup("-2147483648") : NULL);
	count = ft_countdigits(n) - (n < 0);
	if (n < 0 && (n = -n))
		*str = '-';
	while (count > 0)
	{
		*(str + count - (*str != '-')) = n % 10 + '0';
		n = n / 10;
		count--;
	}
	return (str);
}
