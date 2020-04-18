/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 16:19:46 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:46:54 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nbl;

	nbl = n;
	if (nbl >= -2147483648 && nbl <= 2147483647)
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			nbl *= -1;
		}
	if (nbl > 9)
		ft_putnbr_fd(nbl / 10, fd);
	ft_putchar_fd(nbl % 10 + '0', fd);
}