/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:01 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/26 12:09:03 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	if (dest_ptr < src_ptr)
	{
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else if (dest_ptr > src_ptr)
	{
		while (i < n)
		{
			dest_ptr[n - 1 - i] = src_ptr[n - 1 - i];
			i++;
		}
	}
	return (dest);
}

// int main(int argc, char **argv)
// {
//     if (argc != 3)
//     {
//         printf("Usage: %s <source string> <number of bytes to move>\n",
// argv[0]);
//         return (1);
//     }

//     char dest[100];
//     const char *src = argv[1];
//     size_t n = (size_t)atoi(argv[2]);

//     printf("Before ft_memmove: %s\n", dest);

//     ft_memmove(dest, src, n);

//     printf("After ft_memmove: %s\n", dest);

//     return (0);
// }
