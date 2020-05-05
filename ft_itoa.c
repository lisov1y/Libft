/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mike <mike@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 15:53:48 by lisoviy           #+#    #+#             */
/*   Updated: 2020/05/05 12:45:28 by mike             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int      ft_numcount(int n)
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

static char		*ft_strnew_it(size_t size)
{
	char *str;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
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
	nums = ft_numcount(n);
	str = ft_strnew_it(nums + a);
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
