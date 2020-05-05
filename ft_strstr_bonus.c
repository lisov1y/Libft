/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mike <mike@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:37:11 by mike              #+#    #+#             */
/*   Updated: 2020/05/05 12:37:41 by mike             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find[0] == '\0')
		return (str);
	i = -1;
	while (str[++i] != '\0')
	{
		j = -1;
		while (to_find[++j] == str[i + j])
			if (to_find[j + 1] == '\0')
				return (str + i);
	}
	return (0);
}