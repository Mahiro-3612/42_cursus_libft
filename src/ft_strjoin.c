/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:40:57 by codespace         #+#    #+#             */
/*   Updated: 2025/07/19 06:09:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*dest;
	size_t	copied_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	copied_len = ft_strlcpy(dest, s1, s1_len);
	copied_len = ft_strlcpy(dest + s1_len, s2, s2_len);
	return (dest);
}
