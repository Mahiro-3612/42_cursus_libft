/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:26 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 18:26:04 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_char;
	char	*last_c;

	if (c == 0)
	{
		return ((char *)(s + ft_strlen(s)));
	}
	c_char = (const char)c;
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
