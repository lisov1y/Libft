/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:07:30 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 13:39:29 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	char	temp[len];
	int		i;

	cdst = (char *)dst;
	csrc = (char *)src;
	i = 0;
	while (i < len)
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		cdst[i] = temp[i];
		i++;
	}
	return (cdst);
}
