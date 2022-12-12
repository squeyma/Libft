/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabail <saabail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:28:30 by saabail           #+#    #+#             */
/*   Updated: 2022/10/24 19:18:34 by saabail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	srcsize;
	size_t	i;

	if ((!src || !dst) && dstsize == 0)
		return (0);
	dst_size = ft_strlen(dst);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize == 0 || (dstsize < dst_size))
		return (srcsize + dstsize);
	while (src[i] && i + dst_size < dstsize - 1)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + srcsize);
}

/*int	main()
{
	char	test[] = "tt";
	char	test_src[] = "w";
	
	printf("%zu\n", ft_strlcat(test, test_src, 1));
	printf("%zu\n", strlcat(test, test_src, 1));
}*/