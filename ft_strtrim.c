/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:25:40 by saabail           #+#    #+#             */
/*   Updated: 2022/12/12 17:22:47 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_checkchar(char c, const char *set)
{
	size_t	i;

	i = 0;
	if (!set || !c)
		return (0);
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*tab;

	i = 0;
	n = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_checkchar(s1[i], set))
		i++;
	while (ft_checkchar(s1[j], set))
		j--;
	if (s1[i] == '\0')
	{
		tab = malloc(sizeof(char));
		if (!tab)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	tab = ft_substr(s1, i, (j - i) + 1);
	return (tab);
}

// int	main()
// {
// 	char	test[] = "tripouille   xxx";
// 	char	sep[] = " x";
// 	printf(":%s:\n", ft_strtrim(test, sep));
// 	return (0);
// }