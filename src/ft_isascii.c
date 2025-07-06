/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:46 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 16:12:47 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int c)
{
	if (c >= '\0' && c <= 127)
		return (1);
	return (0);
}

// int main(int argc, char **argv)
// {
//     assert(ft_isascii(0) == isascii(0));
//     assert(ft_isascii(127) == isascii(127));
//     assert(ft_isascii(128) == isascii(128));
//     assert(ft_isascii(-1) == isascii(-1));

//     if (argc != 2)
//     {
//         printf("argc must be 2\n");
//         return (1);
//     }
//     else
//     {
//         int c = argv[1][0];
//         assert(ft_isascii(c) == isascii(c));
//         printf("checked ft_isascii('%c')\n", c);
//         return (0);
//     }
// }
