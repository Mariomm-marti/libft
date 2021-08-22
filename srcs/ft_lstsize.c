/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 19:12:52 by mmartin-          #+#    #+#             */
/*   Updated: 2021/08/22 10:57:09 by vim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	DESCRIPTION
**		Recursively iterate through a t_list until next element is NULL, return
**		total count
**	RETURN VALUES
**		List length
*/

int	ft_lstsize(t_list *lst)
{
	if (lst == NULL)
		return (0);
	if (lst->next != NULL)
		return (ft_lstsize(lst->next) + 1);
	return (1);
}
