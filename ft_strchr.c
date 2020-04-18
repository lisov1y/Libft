/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 13:25:25 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:28:12 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cc;
	int		i;

	str = (char *)s;
	cc = (char)c;
	i = 0;
	while (str[i] != '\0' && str[i] != cc)
		i++;
	if (str[i] == cc)
		return (str + i);
	return (NULL);
}