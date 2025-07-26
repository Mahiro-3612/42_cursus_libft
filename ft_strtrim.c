/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:41:11 by codespace         #+#    #+#             */
/*   Updated: 2025/07/26 12:08:44 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_in_set(char const s, char const *set)
{
	size_t	flg;

	flg = 0;
	while (*set)
	{
		if (s == *set)
			flg = 1;
		set++;
	}
	return (flg);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	while (is_in_set(s1[i], set) == 1 && s1[i])
		i++;
	j = ft_strlen(s1) - 1;
	if (s1[i] != '\0')
	{
		while (is_in_set(s1[j], set) == 1)
			j--;
	}
	dest = ft_substr(s1, i, j - i + 1);
	return (dest);
}

// int	main(void)
// {
// 	printf("Trimmed string: '%s'\n", ft_strtrim("   Hello World!   ", " !"));
// 	assert(strcmp(ft_strtrim("   Hello World!   ", " !"), "Hello World") == 0);
// 	return (0);
// }
