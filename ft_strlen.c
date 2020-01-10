/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:09:46 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/10 17:11:02 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Counts length of _s_
**	RETURN VALUES
**		Returns length of string _s_
*/

size_t	ft_strlen(const char *s)
{
	if (*s)
		return (ft_strlen(++s) + 1);
	return (0);
}
