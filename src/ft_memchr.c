/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:12:54 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 16:31:31 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	unsigned char	c_char;

	s_ptr = (unsigned char *)s;
	c_char = (unsigned char)c;
	while (n > 0)
	{
		if (*s_ptr == c_char)
		{
			return (s_ptr);
		}
		s_ptr++;
		n--;
	}
	return (NULL);
}
