/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 05:35:10 by codespace         #+#    #+#             */
/*   Updated: 2025/07/21 08:19:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void	ft_print_result(t_list *elem)
// {
// 	write(1, elem->content, strlen(elem->content));
// }

// static int	nb_free_done;

// void	ft_del(void *content)
// {
// 	free(content);
// 	nb_free_done++;
// }

// int main(void)
// {
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	char		*str = ft_strdup("lorem");
// 	char		*str2 = ft_strdup("ipsum");
// 	char		*str3 = ft_strdup("dolor");
// 	char		*str4 = ft_strdup("sit");

// 	elem = ft_lstnew(str);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem4 = ft_lstnew(str4);
// 	if (!elem || !elem2 || !elem3 || !elem4)
// 		return (0);
// 	elem->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;
// 	nb_free_done = 0;
// 	ft_lstclear(&elem3, &ft_del);
// 	if (elem)
// 		ft_print_result(elem);
// 	else
// 		write(1, "NULL", 4);
// 	write(1, "\n", 1);
// 	if (elem2)
// 		ft_print_result(elem2);
// 	else
// 		write(1, "NULL", 4);
// 	write(1, "\n", 1);
// 	if (elem3)
// 		ft_print_result(elem3);
// 	else
// 		write(1, "NULL", 4);
// 	write(1, "\n", 1);
// 	if (elem4)
// 	{
// 		write(1, "nb_free_done = ", 15);
// 		nb_free_done += '0';
// 		write(1, &nb_free_done, 1);
// 	}
// 	else
// 		write(1, "NULL", 4);
// 	return (0);
// }
