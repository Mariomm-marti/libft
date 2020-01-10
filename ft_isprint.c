/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 22:02:31 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/08 22:07:59 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Checks whether _c_ is in the range of 32-126
**	RETURN VALUES
**		Zero if not in range, one if in range
*/

int		ft_isprint(int c)
{
	if ((unsigned char)c >= 32 && (unsigned char)c <= 126)
		return (1);
	return (0);
}
