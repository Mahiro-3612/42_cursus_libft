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
	char	*found_char;
	size_t	found_len;
	char	*dest;

	found_char = ft_strchr(s, start);
	found_len = ft_strlen(found_char);
	if (found_len == 0)
		return (NULL);
	if (found_len >= len)
	{
		dest = ft_calloc(len + 1, sizeof(char));
		ft_strlcpy(dest, found_char, len);
	}
	else
	{
		dest = ft_calloc(found_len + 1, sizeof(char));
		ft_strlcpy(dest, found_char, found_len);
	}
	return (dest);
}
