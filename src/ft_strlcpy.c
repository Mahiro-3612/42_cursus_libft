/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:15 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 16:33:45 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
//     char dest[10];
//     const char *src = "Hello, World!";
//     size_t copied;

// 	//test when size is 0
// 	copied = ft_strlcpy(dest, src, 0);
// 	printf("Copied string: '%s'\n", dest);
// 	printf("Number of characters copied: %zu\n", copied);
//     copied = ft_strlcpy(dest, src, sizeof(dest));
//     printf("Copied string: '%s'\n", dest);
//     printf("Number of characters copied: %zu\n", copied);

//     // Test with a larger source string
//     const char *long_src = "This is a much longer string"
//  "than the destination can hold.";
//     copied = ft_strlcpy(dest, long_src, sizeof(dest));
//     printf("Copied string: '%s'\n", dest);
//     printf("Number of characters copied: %zu\n", copied);

//     return (0);
// }
