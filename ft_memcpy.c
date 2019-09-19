/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:22:48 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 13:39:03 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cdst;
	char	*csrc;
	int		i;

	cdst = (char *)dst;
	csrc = (char *)src;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	cdst[i] = '\0';
	return (cdst);
}
