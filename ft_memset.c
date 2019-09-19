/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:21:56 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 13:39:57 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				x;
	unsigned char	*str;

	x = 0;
	str = b;
	while (x < len)
	{
		str[x] = c;
		x++;
	}
	return (b);
}
