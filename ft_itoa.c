/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 20:44:01 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/14 12:04:06 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		It requires the _original_ int to check for 0 (as zero is one digit).
**		Calculates the number of digits by dividing _n_ / 10 (decimal base)
**	RETURN VALUES
**		Number of digits the number has, a number below zero would add one more
**		digit
*/

static int	digit_number(long n, int original)
{
	if (original == 0)
		return (1);
	if (n < 0)
		return (digit_number(n * -1, original) + 1);
	if (n > 0)
		return (digit_number(n / 10, original) + 1);
	return (0);
}

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
	long	nl;
	int		count;
	char	*str;

	nl = n;
	if ((str = ft_calloc(1, digit_number(nl, n) + 1)) == NULL)
		return (NULL);
	if (n == 0)
	{
		*str = '0';
		return (str);
	}
	if (n < 0)
		*str = '-';
	nl = (nl < 0 ? nl * -1 : nl);
	count = (n < 0 ? digit_number(nl, n) : digit_number(nl, n) - 1);
	while (nl > 0)
	{
		*(str + count) = (nl > 9) ? nl % 10 + '0' : nl + '0';
		count = (nl > 9 ? --count : count);
		nl /= 10;
	}
	return (str);
}
