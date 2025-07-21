/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:41 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 16:12:41 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	return (0);
}

// int main(int argc, char **argv)
// {
//     assert(ft_isalnum('0') == isalnum('0'));
//     assert(ft_isalnum('9') == isalnum('9'));
//     assert(ft_isalnum('A') == isalnum('A'));
//     assert(ft_isalnum('Z') == isalnum('Z'));
//     assert(ft_isalnum('a') == isalnum('a'));
//     assert(ft_isalnum('z') == isalnum('z'));
//     assert(ft_isalnum('@') == isalnum('@'));
//     assert(ft_isalnum(128) == isalnum(128));
//     assert(ft_isalnum(-1) == isalnum(-1));

//     if (argc != 2)
//     {
//         printf("argc must be 2\n");
//         return (1);
//     }
//     else
//     {
//         int c = argv[1][0];
//         assert(ft_isalnum(c) == isalnum(c));
//         printf("checked ft_isalnum('%c')\n", c);
//         return (0);
//     }
// }
