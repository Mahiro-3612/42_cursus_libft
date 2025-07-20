/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 05:36:43 by codespace         #+#    #+#             */
/*   Updated: 2025/07/20 08:31:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content);

void	ft_lstclear(t_list **lst, void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**original;
	size_t	size;
	t_list	*mapped_pre;
	t_list	*mapped_new;

	original = ft_lstnew(f(lst->content));
	if (!original)
		return (NULL);
	mapped_new = original;
	lst = lst->next;
	while (lst)
	{
		mapped_pre = mapped_new;
		mapped_new = ft_lstnew(f(lst->content));
		if (!mapped_new)
		{
			ft_lstclear(&original, del);
			return (NULL);
		}
		mapped_pre->next = mapped_new;
		lst++;
	}
	return (original);
}
