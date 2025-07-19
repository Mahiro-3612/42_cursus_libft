/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 04:38:48 by codespace         #+#    #+#             */
/*   Updated: 2025/07/19 07:51:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	get_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n < 0)
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
	size_t	copied_len;
	size_t	i;

	digits = get_digits(n);
	dest = ft_calloc(digits + 1, sizeof(char));
	if (!dest)
		return (NULL);
	if (n == INT_MIN)
	{
		copied_len = ft_strlcpy(dest, "-2147483648", digits + 1);
		return (dest);
	}
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	i = digits;
	while (n != 0)
	{
		dest[i] = n % 10;
		n /= 10;
		i--;
	}
	return (dest);
}
