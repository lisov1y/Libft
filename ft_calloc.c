/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisoviy <lisoviy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 11:13:24 by lisoviy           #+#    #+#             */
/*   Updated: 2020/04/16 13:37:29 by lisoviy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
	void    *arr;
	size_t	len;;

	arr = NULL;
	len = nmemb * size;
	arr = malloc(len);
	if (arr != NULL)
		ft_bzero(arr, len);
	return (arr);   
}