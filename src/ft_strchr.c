/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:07 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 16:13:07 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char c_char;

	c_char = (const char)c;

	while (*s)
	{
		if (*s == c_char)
		{
			return (char *)(s);
		}
		s++;
	}
	return (NULL);
}