/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:14:54 by saabail           #+#    #+#             */
/*   Updated: 2022/12/14 11:14:36 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_int(int n)
{
	int	nb;
	int	count;

	count = 0;
	nb = n;
	if (n < 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static unsigned int	ft_convert(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static void	tab_zero(char **tab)
{
	*tab = malloc(sizeof(char) * 2);
	if (!(*tab))
		return ;
	(*tab)[0] = '0';
	(*tab)[1] = '\0';
}

char	*ft_itoa(int n)
{
	char				*tab;
	unsigned int		div;
	int					size;

	tab = NULL;
	if (n == 0)
	{
		tab_zero(&tab);
		return (tab);
	}
	size = size_int(n);
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	if (n < 0)
		tab[0] = '-';
	div = ft_convert(n);
	tab[size--] = '\0';
	while (div > 0)
	{
		tab[size--] = (div % 10) + '0';
		div = (div / 10);
	}
	return (tab);
}
