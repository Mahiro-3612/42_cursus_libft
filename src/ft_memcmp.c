/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:56 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 16:12:57 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s1_ptr;
	const unsigned char *s2_ptr;

	s1_ptr = (const unsigned char *)s1;
	s2_ptr = (const unsigned char *)s2;

	while (n > 0 && *s1_ptr == *s2_ptr && *s1_ptr != '\0' && *s2_ptr != '\0')
	{
		s1_ptr++;
		s2_ptr++;
		n--;
	}
	return (*s1_ptr - *s2_ptr);
}