/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 13:53:19 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:24:26 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = -1;
	while (++i < n)
	{
		if (dest > src)
			((char *)dest)[n - i - 1] = ((const char *)src)[n - i - 1];
		else
			((char *)dest)[i] = ((const char *)src)[i];
	}
	return (dest);
}
