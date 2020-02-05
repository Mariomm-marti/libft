/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 13:27:17 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/12 13:29:40 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <unistd.h>

/*
**	DESCRIPTION
**		A simple way of writing into a file.
**		The usage of 1 as for stdout is allowed
**	RETURN VALUES
**		None
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
