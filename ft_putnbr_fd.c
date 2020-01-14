/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:11:53 by mmartin-          #+#    #+#             */
/*   Updated: 2020/01/12 18:28:33 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long nlong;
	char digit;

	nlong = (long)n;
	if (nlong < 0)
	{
		write(fd, "-", 1);
		nlong *= -1;
	}
	if (nlong < 10)
	{
		digit = nlong + '0';
		write(fd, &digit, 1);
	}
	else
	{
		ft_putnbr_fd(nlong / 10, fd);
		ft_putnbr_fd(nlong % 10, fd);
	}
}
