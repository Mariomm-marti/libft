/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 18:51:29 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/17 12:00:55 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Through the use of an auxiliar t_list, adds at the front of the list
**		_alst_ a new element _new_
**	RETURN VALUES
**		None
*/

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	new->next = *alst;
	*alst = new;
}
