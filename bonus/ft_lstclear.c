/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 05:35:10 by codespace         #+#    #+#             */
/*   Updated: 2025/07/20 06:36:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst || !*lst || !del)
		return ;
	while (*lst)
	{
		*tmp = *lst->content;
		ft_lstdelone(*tmp, del);
		*lst = *tmp;
	}
}
