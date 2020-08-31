/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 13:32:53 by mmartin-          #+#    #+#             */
/*   Updated: 2020/08/28 19:10:05 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <unistd.h>

/*
**	DESCRIPTION
**		Writes _s_ to _fd_, if _fd_ is 1 it is printed to the stdout.
**		Uses ft_strlen in order to avoid more write calls
**	RETURN VALUES
**		None
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
