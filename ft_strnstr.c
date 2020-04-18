/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 13:26:54 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:31:14 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hstck;
	char	*ndl;

	hstck = (char *)h;
	ndl = (char *)n;
	if (ndl[0] == '\0' || ndl == NULL)
		return (hstck);
	i = 0;
	while (hstck[i] != '\0' && i < len)
	{
		j = 0;
		while (ndl[j] == hstck[i + j] && i + j < len)
		{
			if (ndl[j + 1] == '\0')
				return (hstck + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
