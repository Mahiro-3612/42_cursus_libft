/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:34 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/21 14:24:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
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

//     printf("Before bzero: %s\n", str);

//     ft_bzero(str, 5);

//     printf("After bzero: ");
//     for (size_t i = 0; i < strlen(argv[1]); i++)
//     {
//         printf("%c", str[i]);
//     }

//     return (0);
// }
