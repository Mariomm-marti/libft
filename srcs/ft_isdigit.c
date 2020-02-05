/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 21:35:55 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/11 15:00:54 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Checks, ignoring the locale, whether the passed _c_ is between 48-57
**	RETURN VALUES
**		Zero if not in range, one if in range
*/

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
