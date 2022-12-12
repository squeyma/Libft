/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:48:40 by saabail           #+#    #+#             */
/*   Updated: 2022/12/12 14:42:02 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	if (!haystack && len == 0)
		return (NULL);
	if ((char)needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		b = 0;
		if (haystack[i] == needle[b])
		{
			while (needle[b] && haystack[i + b] == needle[b] && (i + b) < len)
			{
				b++;
				if (needle[b] == '\0')
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	haystack[] = "lorem ipsum dolor sit amet";
	const char	needle[] = "ipsumm";
	
	printf("%s\n", ft_strnstr(haystack, needle, 30));
	printf("%s\n", strnstr(haystack, needle, 30));

	return (0);
}*/