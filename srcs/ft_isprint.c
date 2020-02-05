/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 22:02:31 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/11 15:02:56 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Checks whether _c_ is in the range of 32-126
**	RETURN VALUES
**		Zero if not in range, one if in range
*/

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
