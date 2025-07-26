/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:38:48 by codespace         #+#    #+#             */
/*   Updated: 2025/07/26 12:09:16 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	size_t	digits;
	char	*dest;
	long	num;

	digits = get_digits(n);
	dest = ft_calloc(digits + 1, sizeof(char));
	if (!dest)
		return (NULL);
	num = (long)n;
	if (num == 0)
		ft_strlcpy(dest, "0", digits + 1);
	if (num < 0)
	{
		dest[0] = '-';
		num *= -1;
	}
	while (num != 0)
	{
		dest[--digits] = '0' + num % 10;
		num /= 10;
	}
	return (dest);
}
