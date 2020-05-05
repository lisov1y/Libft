/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mike <mike@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 12:26:19 by mike              #+#    #+#             */
/*   Updated: 2020/05/05 12:26:47 by mike             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mmr;

	if (!(mmr = (void *)malloc(size)))
		return (NULL);
	ft_bzero(mmr, size);
	return (mmr);
}