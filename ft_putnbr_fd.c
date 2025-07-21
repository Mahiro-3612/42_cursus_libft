/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:39:08 by codespace         #+#    #+#             */
/*   Updated: 2025/07/21 14:22:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	long	div;
	char	c;

	num = (long)n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	div = 1;
	while (num / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = '0' + (num / div);
		ft_putchar_fd(c, fd);
		num %= div;
		div /= 10;
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(12345, 1);
// 	ft_putnbr_fd(-67890, 1);
// 	ft_putnbr_fd(0, 1);
// 	return (0);
// }
