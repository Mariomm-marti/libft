/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:45:19 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/12 18:52:26 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Clears a list _lst_ using the providen function _del_ for each element
**		content
**	RETURN VALUES
**		None
*/

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *aux;

	aux = *lst;
	while (aux)
	{
		ft_lstdelone(aux, del);
		aux = aux->next;
	}
	*lst = NULL;
}
