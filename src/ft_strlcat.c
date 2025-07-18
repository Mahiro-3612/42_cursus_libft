/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:12 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/18 16:55:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (dst_len + i < size - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <bsd/string.h>

// int main(void)
// {
// 	char	dest1[30];
// 	char	dest2[30];
// 	const char *src = "AAAAAAAAA";
// 	memset(dest1, 'B', 4);
// 	memset(dest2, 'B', 4);
// 	printf("%ld", ft_strlcat(dest1, src, 6));
// 	printf("%ld\n", strlcat(dest2, src, 6));
// 	assert(ft_strlcat(dest1, src, 6) == strlcat(dest2, src, 6));
// 	assert(strcmp(dest1, dest2) == 0);

// 	return (0);
// }
