/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 10:54:47 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/15 11:07:12 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(const char *s)
{
	char    *cpy;
	int     len;
	int		i;

	len = 0;
	while (s[len])
		++len;
	if (!(cpy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		cpy[i] = s[i];
	cpy[i] = '\0';
	return (cpy);
}
