/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:56 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/26 12:09:05 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_ptr;
	const unsigned char	*s2_ptr;

	s1_ptr = (const unsigned char *)s1;
	s2_ptr = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 0 && *s1_ptr == *s2_ptr)
	{
		s1_ptr++;
		s2_ptr++;
		n--;
		if (n == 0)
			return (0);
	}
	return (*s1_ptr - *s2_ptr);
}
// int main(void)
// {
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};

// 	assert(ft_memcmp("Hello", "Hello", 5) == memcmp("Hello", "Hello", 5));
// 	assert(ft_memcmp("Hello", "World", 5) != memcmp("Hello", "World", 5));
// 	assert(ft_memcmp("", "", 0) == memcmp("", "", 0));
// 	assert(ft_memcmp("abc", "abc", 3) == memcmp("abc", "abc", 3));
// 	assert(ft_memcmp("abc", "abd", 3) == memcmp("abc", "abd", 3));
// 	assert(ft_memcmp(s2, s3, 4) == memcmp(s2, s3, 4));
// 	return (0);
// }
