/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 21:48:57 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/08 21:56:02 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Checks whether _c_ is in range of 48-57, 65-90 or 97-122
**	RETURN VALUES
**		Zero if not in range, one if in range
*/

int		ft_isalnum(int c)
{
	if (((unsigned char)c >= '0' && (unsigned char)c <= '9') ||
			((unsigned char)c >= 'A' && (unsigned char)c <= 'Z') ||
			((unsigned char)c >= 'a' && (unsigned char)c <= 'z'))
		return (1);
	return (0);
}
