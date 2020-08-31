/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:09:46 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 19:44:47 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Counts length of _s_
**	RETURN VALUES
**		Returns length of string _s_
*/

size_t	ft_strlen(char const *s)
{
	size_t	count;

	count = 0;
	while (*(s + count))
		++count;
	return (count);
}
