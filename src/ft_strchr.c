/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:07 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 18:09:17 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_char;

	if (c == 0)
	{
		return ((char *)(s + ft_strlen(s)));
	}
	c_char = (const char)c;
	while (*s)
	{
		if (*s == c_char)
		{
			return ((char *)(s));
		}
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	assert(ft_strchr("Hello World", 'W') == strchr("Hello World", 'W'));
// 	assert(ft_strchr("Hello World", 'z') == strchr("Hello World", 'z'));
// 	assert(ft_strchr("", 'a') == strchr("", 'a'));
// 	assert(ft_strchr("a", 0) == strchr("a", 0));
// 	assert(ft_strchr("", 0) == strchr("", 0));
// }
