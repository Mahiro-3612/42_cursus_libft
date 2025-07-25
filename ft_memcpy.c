/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:59 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/21 14:34:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	if (!dest && !src)
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
// int main(int argc, char **argv)
// {
//     if (argc != 3)
//     {
//         printf("Usage: %s <source> <destination>\n", argv[0]);
//         return (1);
//     }

//     char dest[100];
//     strcpy(dest, argv[1]);

//     printf("Before memcpy: %s\n", dest);

//     ft_memcpy(dest, argv[2], strlen(argv[2]) + 1);

//     printf("After memcpy: %s\n", dest);

//     return (0);
// }
