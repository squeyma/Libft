/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:36:40 by saabail           #+#    #+#             */
/*   Updated: 2022/12/06 12:51:25 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	max_size(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long long	nb;
	long		sign;
	int			i;
	int			cpt;

	cpt = 1;
	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] == '0')
		i++;
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + str[i++] - '0';
		if (cpt++ > 19 || nb < 0)
			return (max_size(sign));
	}
	return ((int)(nb * sign));
}

// int	main(void)
// {
// 	char	*str;

// 	str = "+1234";
// 	printf("%d", ft_atoi(str));
// 	return (0);
// }