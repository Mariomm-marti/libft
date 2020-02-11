/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 00:06:01 by mmartin-          #+#    #+#             */
/*   Updated: 2020/02/11 02:08:56 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Converts given number _num_ into ASCII nul-terminated string using
**		_base_.
**		<WARNING: This function doesn't check for valid base, it just checks
**		for a base higher than 2 (binary)>
**	RETURN VALUES
**		Returns NULL if no base is given or base length is less than binary,
**		or a heap allocated string with the result
*/

char	*ft_itoa_base(int num, const char *base)
{
	char	temp[66];
	int		temp_index;
	int		count;
	int		aux;

	if (!base || (count = ft_strlen(base)) < 2)
		return (NULL);
	temp_index = 0;
	if (num < 0 && (num = -num))
		*(temp + temp_index++) = '-';
	while (count >= 2 && num > 0)
	{
		*(temp + temp_index) = *(base + (num % count));
		temp_index++;
		num /= count;
	}
	*(temp + temp_index) = 0;
	count = (*temp == '-' ? 0 : -1);
	while (--temp_index >= ++count)
	{
		aux = *(temp + count);
		*(temp + count) = *(temp + temp_index);
		*(temp + temp_index) = aux;
	}
	return (ft_strdup(temp));
}
