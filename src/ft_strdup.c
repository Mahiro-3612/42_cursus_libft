/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurai <msakurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:13:09 by msakurai          #+#    #+#             */
/*   Updated: 2025/07/06 16:13:10 by msakurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*strdup(const char *s)
{
	char	*copy;

	copy = malloc(strlen(s) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(copy, s, strlen(s) + 1);
	return (copy);
}
