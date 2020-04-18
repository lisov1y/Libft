/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 15:07:58 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:26:02 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If the memory areas overlap, the results are undefined.
** Works different on Ubuntu.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		if (((char *)dest)[i] == (char)c)
			return (((char *)dest) + i + 1);
	}
	return (NULL);
}
