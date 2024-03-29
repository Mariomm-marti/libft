/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 21:58:41 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/22 10:59:01 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Checks whether _c_ is an ASCII character in the range of 0-127
**	RETURN VALUES
**		Zero if not in range, one if in range
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
