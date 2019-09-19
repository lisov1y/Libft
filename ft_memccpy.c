/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:40:47 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 14:34:50 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*ccdst;
	char			*ccsrc;
	size_t			i;
	unsigned char	cc;

	ccdst = (char *)dst;
	ccsrc = (char *)src;
	cc = (unsigned char)c;
	i = 0;
	while (i < n && ccsrc[i - 1] != cc)
	{
		ccdst[i] = ccsrc[i];
		i++;
	}
	ccdst[i] = '\0';
	return (ccdst);
}
