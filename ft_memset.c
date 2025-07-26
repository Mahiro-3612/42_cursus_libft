/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:04 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/26 12:09:02 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  The  memset()  function  fills  the  first  n bytes of the memory
//  area pointed to by s with the constant byte c.
// s[.n] is a GNU extension that allows you to specify the size of the array s.
// s has at leat n bytes.

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(int argc, char **argv)
// {
//     if (argc != 2)
//     {
//         printf("argc must be 2\n");
//         return (1);
//     }

//     char str[100];
//     strcpy(str, argv[1]);

//     printf("Before memset: %s\n", str);

//     ft_memset(str, 'x', 5);

//     printf("After memset: %s\n", str);

//     return (0);
// }
