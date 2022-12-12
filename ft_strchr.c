/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:21:37 by saabail           #+#    #+#             */
/*   Updated: 2022/10/13 14:33:20 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char	s[] = "tripouille";
	 
	printf("%s\n", ft_strchr(s, 0));
	printf("%s\n", strchr(s, 0));
}*/