/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 00:06:01 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 19:03:50 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Converts integer _num_ to ASCII C-string using _base_
**		and sends it to _out_ so heap isn't needed
**		_out_ WILL NOT BE NUL-TERMINATED
**	RETURN VALUES
**		Number of characters modified in _out_
*/

int		ft_itoa_base(char *out, long long int num, char const *base)
{
	t_byte	base_length;
	t_byte	out_ch;
	t_byte	len_ch;

	if (!out || !base)
		return (0);
	base_length = ft_strlen(base);
	out_ch = num < 0;
	if (out_ch && (num = -num))
		*out = '-';
	len_ch = ft_logn(base_length, num) + out_ch + 1;
	while (out_ch < len_ch)
	{
		*(out + len_ch - out_ch - (*out != 45)) = *(base + (num % base_length));
		num /= base_length;
		out_ch++;
	}
	*(out + out_ch) = 0;
	return (len_ch);
}
