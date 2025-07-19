/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:41:11 by codespace         #+#    #+#             */
/*   Updated: 2025/07/19 08:24:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	set_count;

	set_count = 0;
	while (*set)
	{
		if (ft_strchr(s1, (int)*set) != NULL)
			set_count++;
		set++;
	}
	dest = ft_calloc(ft_strlen(s1) - set_count + 1, sizeof(char));
	while (*s1)
	{
		if (ft_strchr(s1, (int)*set) == NULL)
			*dest = *s1;
		dest++;
		s1++;
	}
	return (dest);
}
