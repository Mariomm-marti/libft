/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 19:26:23 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/12 20:30:57 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

/*
**	DESCRIPTION
**		Mapping takes _lst_ and generates a new list WITHOUT FREEING the
**		existing one. The function _f_ is applied to _lst_ for each element,
**		if the map fails, the just created element is removed and NULL is
**		returned
**	RETURN VALUES
**		Map if the whole map was successfully created, NULL if mapping failed
*/

void	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*first;

	if (!f || !lst)
		return (NULL);
	map = ft_lstnew(f(lst->content));
	first = map;
	while (lst->next)
	{
		lst = lst->next;
		if (!(map->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		map = map->next;
	}
	return (first);
}
