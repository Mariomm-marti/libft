/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 14:43:10 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/21 20:24:47 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Finds if there are differences between _s1_ and _s2_ and return the
**		difference
**	RETURN VALUES
**		Return the difference between _s1_ and _s2_ or zero if none is found
*/

int	ft_strcmp(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (1);
	if (*s1 != *s2 || *s1 == 0)
		return (*s1 - *s2);
	return (ft_strcmp(s1 + 1, s2 + 1));
}
