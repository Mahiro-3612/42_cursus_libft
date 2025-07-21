/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:26 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/21 14:22:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_char;
	char	*last_c;

	c_char = (const char)c;
	if (c_char == '\0')
	{
		return ((char *)(s + ft_strlen(s)));
	}
	last_c = NULL;
	while (*s)
	{
		if (*s == c_char)
		{
			last_c = (char *)s;
		}
		s++;
	}
	return (last_c);
}

// int	main(void)
// {
// 	assert(ft_strrchr("Wello World", 'W') == strrchr("Wello World", 'W'));
// 	assert(ft_strrchr("Hello World", 'z') == strrchr("Hello World", 'z'));
// 	assert(ft_strrchr("", 'a') == strrchr("", 'a'));
// 	assert(ft_strrchr("a", 0) == strrchr("a", 0));
// 	assert(ft_strrchr("", 0) == strrchr("", 0));
// }
