/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 14:56:30 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/18 15:41:15 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		word_cnt(char const *s, char c)
{
	unsigned int	i;
	unsigned int	x;

	i = -1;
	x = 0;
	while (s[++i])
		if (s[i] != c && s[i + 1] == c)
			++x;
	return (x);
}

static int				length(const char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		++len;
	return (len);
}

char					**ft_split(char const *s, char c)
{
	char			**ret;
	unsigned int	i;
	unsigned int	x;
	unsigned int	words;

	if (!s)
		return (NULL);
	words = word_cnt(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	i = -1;
	x = 0;
	while (++i < words)
	{
		while (s[x] == c && s[x])
			++x;
		ret[i] = ft_substr(s, x, length(s + x, c));
		while (s[x] != c && s[x])
			++x;
	}
	ret[++i] = NULL;
	return (ret);
}
