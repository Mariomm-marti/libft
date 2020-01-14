/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:54:21 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/12 19:25:23 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**		Iterates through the _lst_ and apply _f_ to each element
**	RETURN VALUES
**		None
*/

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	if (f)
		f(lst->content);
	ft_lstiter(lst->next, f);
}
