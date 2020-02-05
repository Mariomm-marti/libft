/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:42:32 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/15 11:10:36 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Fills _n_ bytes with 0 to _s_
**	RETURN VALUE
**		None
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
