/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:40:19 by codespace         #+#    #+#             */
/*   Updated: 2025/07/19 07:43:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	count_row(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (*s != '\0')
		i++;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

size_t	count_column(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	row_count;
	size_t	column_count;
	char	**dest;
	char	*column;

	row_count = count_row(s, c);
	dest = ft_calloc(row_count + 1, sizeof(char *));
	if (!dest)
		return (NULL);
	while (*dest)
	{
		while (*s == c)
			s++;
		column_count = count_column(s, c);
		*dest = ft_substr(s, c, column_count + 1);
		dest++;
		s += column_count;
	}
	dest[row_count] = NULL;
	return (dest)
}
