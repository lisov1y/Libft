/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:57:26 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 13:33:53 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int result;
	int a;
	int b;

	a = 1;
	b = 0;
	result = 0;
	while (str[b] < 33)
		b++;
	if (str[b] == '-')
	{
		a = -1;
		b++;
	}
	else if (str[b] == '+')
		b++;
	while ((str[b] != '\0') && (str[b] >= '0' && str[b] <= '9'))
		result = result * 10 + str[b++] - '0';
	return (result * a);
}
