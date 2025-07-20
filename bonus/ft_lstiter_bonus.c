/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 05:35:57 by codespace         #+#    #+#             */
/*   Updated: 2025/07/20 08:31:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (*lst)
	{
		lst->content = f(lst->content);
		lst = lst->next;
	}
}
