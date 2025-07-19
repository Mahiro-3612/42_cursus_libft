/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:41:17 by codespace         #+#    #+#             */
/*   Updated: 2025/07/19 08:20:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	max_len;

	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	max_len = ft_strlen(s) - start;
	if (max_len < len)
		len = max_len;
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}

// int	main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*strsub;

// 	assert(strcmp(ft_substr(str, 0, 10), "lorem ipsu") == 0);
// 	assert(strcmp(ft_substr("", 0, 0), "") == 0);
// 	assert(strcmp(ft_substr("", 0, 1), "") == 0);
// 	return (0);
// }
