/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 13:06:34 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:27:53 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	if (size <= dlen)
		slen = slen + size;
	else
		slen = slen + dlen;
	if (size > dlen)
	{
		i = 0;
		while (src[i] && dlen < size - 1)
			dest[dlen++] = src[i++];
		dest[dlen] = '\0';
	}
	return (slen);
}