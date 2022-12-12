/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:38:41 by saabail           #+#    #+#             */
/*   Updated: 2022/11/28 16:57:25 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sizetab(char const *s, char c)
{
	size_t	i;
	size_t	size;

	size = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (size);
}

void	ft_free(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split[i]);
}

void	ft_tabsplit(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	line;

	i = 0;
	line = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			split[line] = malloc(sizeof(char) * (j + 1));
			if (!split[line])
				return (ft_free(split));
			ft_memcpy(split[line], s + i, j);
			split[line][j] = 0;
			i += j;
			line++;
		}
		else
			i++;
	}
	split[line] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**split;

	if (!s)
		return (NULL);
	size = ft_sizetab(s, c);
	split = malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	ft_tabsplit(split, s, c);
	return (split);
}

/*int	main()
{
	char	test[] = " tripouille 42 ";
	char	sep[] = "tf";
	
	printf("%s\n", ft_split(test, sep));
}*/