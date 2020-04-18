/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 14:30:21 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:35:42 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (s[start] && len != 0)
	{
		sub[++i] = s[start];
		++start;
		--len;
	}
	return (sub);
}
