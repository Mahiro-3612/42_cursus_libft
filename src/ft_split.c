/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:40:19 by codespace         #+#    #+#             */
/*   Updated: 2025/07/19 08:25:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	count_row(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

size_t	count_column(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	*ft_free_split(char **split)
{
	size_t	i;

	if (!split)
		return (NULL);
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**get_columns(char const *s, char c, size_t row_count, char **dest)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < row_count)
	{
		while (s[j] == c && s[j])
			j++;
		dest[i] = ft_substr(s, j, count_column(&s[j], c));
		if (!dest[i])
			return (ft_free_split(dest));
		while (s[j] != c && s[j])
			j++;
		i++;
	}
	dest[row_count] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	row_count;
	char	**dest;

	row_count = count_row(s, c);
	dest = ft_calloc(row_count + 1, sizeof(char *));
	if (!dest)
		return (NULL);
	return (get_columns(s, c, row_count, dest));
}

// int main(void)
// {
// 	char str1[] = "lorem ipsum dolor sit aaaaaaa";
// 	char str2[] = "   lorem ipsum dolor sit amet ";
// 	char **result1;
// 	char **result2;
// 	size_t i;

// 	result1 = ft_split(str1, ' ');
// 	result2 = ft_split(str2, ' ');
// 	if (!result1 || !result2)
// 		return (1);
// 	for (i = 0; result1[i]; i++)
// 	{
// 		printf("Word %zu: %s\n", i, result1[i]);
// 		free(result1[i]);
// 	}
// 	for (i = 0; result2[i]; i++)
// 	{
// 		printf("Word %zu: %s\n", i, result2[i]);
// 		free(result2[i]);
// 	}
// 	free(result2);
// 	free(result1);
// 	return (0);
// }
