/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 11:15:34 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/24 16:38:55 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_counter(int n)
{
	int count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		a;
	int		nums;
	int		i;

	a = 0;
	if (n < 0)
		a = 1;
	nums = num_counter(n);
	str = ft_strnew(nums + a);
	if (str == NULL)
		return (NULL);
	if (a)
		str[0] = '-';
	i = nums + a - 1;
	while (i >= a)
	{
		if (a)
			str[i--] = (n % 10 * -1) + '0';
		else
			str[i--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
