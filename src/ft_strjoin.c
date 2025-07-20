/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:40:57 by codespace         #+#    #+#             */
/*   Updated: 2025/07/19 08:21:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*dest;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, s1_len + 1);
	ft_strlcpy(dest + s1_len, s2, s2_len + 1);
	return (dest);
}

// int	main(void)
// {
// 	assert(strcmp(ft_strjoin("abc", "def"), "abcdef") == 0);
// 	assert(strcmp(ft_strjoin("abc", ""), "abc") == 0);
// 	return (0);
// }
