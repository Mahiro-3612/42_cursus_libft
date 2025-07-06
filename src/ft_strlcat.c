/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:12 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 17:55:01 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	dst_len;
	size_t	src_len;

	dst_size = sizeof(dst);
	src_len = ft_strlen(src);
	if (dst_size <= size)
		return (size + src_len);
	i = 0;
	dst_len = ft_strlen(dst);
	while (dst_len + i < size - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + i);
}

// int main(void)
// {
// 	char dst1[20] = "Hello, ";
// 	const char *src1 = "World!";
// 	size_t size1 = 20;
// 	size_t result1 = ft_strlcat(dst1, src1, size1);
// 	printf("Resulting string: %s\n", dst1);
// 	printf("Total length: %zu\n", result1);

// 	char dst2[20] = "Hello, ";
// 	const char *src2 = "World!";
// 	size_t size2 = 0;
// 	size_t result2 = ft_strlcat(dst2, src2, size2);
// 	printf("Resulting string with size: %s\n", dst2);
// 	printf("Total length with size: %zu\n", result2);

// 	char dst3[10] = "Hello, ";
// 	const char *src3 = "World!";
// 	size_t size3 = 15;
// 	size_t result3 = ft_strlcat(dst3, src3, size3);
// 	printf("Resulting string with size: %s\n", dst3);
// 	printf("Total length with size: %zu\n", result3);

// 	char dst4[14] = "a";
// 	const char *src4 = "lorem ipsum dolor sit amet";
// 	size_t size4 = 15;
// 	size_t result4 = ft_strlcat(dst4, src4, size4);
// 	printf("Resulting string with size: %s\n", dst4);
// 	printf("Total length with size: %zu\n", result4);

// 	return (0);
// }
