/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:51:13 by mstupnik          #+#    #+#             */
/*   Updated: 2019/09/19 13:35:07 by mstupnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	unsigned char cc;

	cc = (unsigned char)c;
	if (cc >= 48 && cc <= 57)
		return (1);
	else if (cc >= 65 && cc <= 90)
		return (1);
	else if (cc >= 97 && cc <= 122)
		return (1);
	else
		return (0);
}
