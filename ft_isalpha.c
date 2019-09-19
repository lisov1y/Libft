/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:30:49 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 13:35:44 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	unsigned char cc;

	cc = (unsigned char)c;
	if (cc >= 65 && cc <= 90)
		return (1);
	else if (cc >= 97 && cc <= 122)
		return (1);
	else
		return (0);
}
