/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:23 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/18 09:53:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && i + j
				< len && big[i + j] && little[j])
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>

// int	main(void)
// {
// 	assert(ft_strnstr("hello world", "", 20) == strnstr("hello world", "", 20));
// 	assert(ft_strnstr("", "hello", 20) == strnstr("", "hello", 20));
// 	assert(ft_strnstr("", "", 20) == strnstr("", "", 20));
// 	assert(ft_strnstr("hello world", "world", 0) ==
// 	strnstr("hello world", "world", 0));
// 	assert(ft_strnstr("hello world", "world", 11) ==
// 	strnstr("hello world", "world", 11));
// 	assert(ft_strnstr("aaxx", "xx", 5) ==
// 	strnstr("aaxx", "xx", 5));
// 	assert(ft_strnstr("abc", "abc", 7) ==
// 	strnstr("abc", "abc", 7));
// }
