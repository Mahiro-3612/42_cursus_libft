/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 05:24:39 by codespace         #+#    #+#             */
/*   Updated: 2025/07/20 08:33:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_lstsize(t_list *lst)
{
	size_t	count;

	if (!lst)
		return (0);
	count = 1;
	while (lst->next)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
