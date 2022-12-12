/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:19:49 by saabail           #+#    #+#             */
/*   Updated: 2022/12/12 17:26:14 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	void	*odst;

	if (!dst && !src)
		return (NULL);
	i = 0;
	odst = dst;
	while (i < n)
	{
		*(char *) odst = *(char *) src;
		i++;
		odst++;
		src++;
	}
	return (dst);
}
