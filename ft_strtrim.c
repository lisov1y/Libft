/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 14:10:52 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:37:29 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	true_len(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;
	unsigned int	f;

	i = -1;
	c = 0;
	while (s1[++i])
	{
		j = -1;
		f = 0;
		while (set[++j])
			if (s1[i] == set[j])
			{
				f = 1;
				break ;
			}
		if (!f)
			++c;
	}
	return (c);
}

static unsigned int	checker(char c, char const *set)
{
	unsigned int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (0);
	return (1);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char			*ret;
	unsigned int	i;
	unsigned int	j;

	if (!s1)
		return (NULL);
	if (!(ret = (char *)malloc(sizeof(char) * (true_len(s1, set) + 1))))
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
	{
		if (checker(s1[i], set))
			ret[++j] = s1[i];
	}
	ret[++i] = '\0';
	return (ret);
}
