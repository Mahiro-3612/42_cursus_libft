/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:12 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/21 10:02:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (s[len] && len < maxlen)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_nlen;
	size_t	src_len;

	dst_nlen = ft_strnlen(dst, size);
	src_len = ft_strlen(src);
	if (dst_nlen == size)
		return (size + src_len);
	i = 0;
	while (dst_nlen + i + 1 < size && src[i])
	{
		dst[dst_nlen + i] = src[i];
		i++;
	}
	dst[dst_nlen + i] = '\0';
	return (dst_nlen + src_len);
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
