/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:21:20 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 13:47:10 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	cc;
	int		i;
	int		pos;

	str = (char *)s;
	cc = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == cc)
			pos = i;
		i++;
	}
	if (str[pos] == cc)
		return (str + pos);
	return (NULL);
}
