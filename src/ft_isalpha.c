/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:43 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 16:12:44 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// int main(int argc, char **argv)
// {
//     assert(ft_isalpha('A') == isalpha('A'));
//     assert(ft_isalpha('Z') == isalpha('Z'));
//     assert(ft_isalpha('a') == isalpha('a'));
//     assert(ft_isalpha('z') == isalpha('z'));
//     assert(ft_isalpha('0') == isalpha('0'));
//     assert(ft_isalpha('@') == isalpha('@'));
//     assert(ft_isalpha(128) == isalpha(128));
//     assert(ft_isalpha(-1) == isalpha(-1));

//     if (argc != 2)
//     {
//         printf("argc must be 2\n");
//         return (1);
//     }
//     else
//     {
//         int c = argv[1][0];
//         assert(ft_isalpha(c) == isalpha(c));
//         printf("checked ft_isalpha('%c')\n", c);
//         return (0);
//     }
// }
