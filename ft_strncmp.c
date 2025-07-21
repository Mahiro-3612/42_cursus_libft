/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:20 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/21 14:22:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && c1[i] && c2[i])
	{
		if (c1[i] != c2[i] || i + 1 == n)
			break ;
		i++;
	}
	return (c1[i] - c2[i]);
}

// int main(void)
// {
// 	assert(ft_strncmp("Hello", "Hello", 5) == strncmp("Hello", "Hello", 5));
// 	assert(ft_strncmp("Hello", "hello", 5) == strncmp("Hello", "hello", 5));
// 	assert(ft_strncmp("Hello", "Hell", 5) == strncmp("Hello", "Hell", 5));
// 	assert(ft_strncmp("Hello", "Hello World", 5) ==
// 	strncmp("Hello", "Hello World", 5));
// 	assert(ft_strncmp("Hello World", "Hello", 5) ==
// 	strncmp("Hello World", "Hello", 5));
// 	assert(ft_strncmp("", "", 5) == strncmp("", "", 5));
// 	assert(ft_strncmp("abc", "abcd", 3) == strncmp("abc", "abcd", 3));
// 	assert(ft_strncmp("abcd", "abc", 4) == strncmp("abcd", "abc", 4));
// 	assert(ft_strncmp("t", "", 0) == strncmp("t", "", 0));
// 	assert(ft_strncmp("", "1", 0) == strncmp("", "1", 0));
// 	assert(ft_strncmp("", "", 0) == strncmp("", "", 0));
// 	assert(ft_strncmp("abcdef", "abc\375xx", 5) ==
// strncmp("abcdef", "abc\375xx", 5));
// 	return (0);
// }
