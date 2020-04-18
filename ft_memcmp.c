/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 14:47:06 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/15 15:20:08 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
	return (0);
}
