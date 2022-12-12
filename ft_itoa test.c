/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:14:54 by saabail           #+#    #+#             */
/*   Updated: 2022/10/13 13:25:15 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);	
	}
	else if (n >= 0)
	{
		return (n);
	}
}

char	*ft_itoa(int n)
{
	char	*tab;
	char	digit;
	size_t	i;
	
	i = 0;
	tab = malloc(sizeof(char) * 5);
	if (!tab)
		return (NULL);
	if (n < 0)
	{
		tab[i] = '-';
		i++;
	}
	while (i != 4)
	{
		tab[i] = ft_putnbr(n);
		i++;
	}
	tab[i] = '\0';
	return(tab);
}
int	main()
{
	printf("%s\n", ft_itoa(1234));
}