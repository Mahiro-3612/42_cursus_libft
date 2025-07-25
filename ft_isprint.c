/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:51 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/21 14:22:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// int main(int argc, char **argv)
// {
//     assert(ft_isprint(0) == isprint(0));
//     assert(ft_isprint(31) == isprint(31));
//     assert(ft_isprint(' ') == isprint(' '));
//     assert(ft_isprint('~') == isprint('~'));
//     assert(ft_isprint(127) == isprint(127));
//     assert(ft_isprint(128) == isprint(128));
//     assert(ft_isprint(-1) == isprint(-1));

//     if (argc != 2)
//     {
//         printf("argc must be 2\n");
//         return (1);
//     }
//     else
//     {
//         int c = argv[1][0];
//         assert(ft_isprint(c) == isprint(c));
//         printf("checked ft_isprint('%c')\n", c);
//         return (0);
//     }
// }
