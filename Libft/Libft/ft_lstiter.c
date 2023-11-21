/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:56:55 by mreis             #+#    #+#             */
/*   Updated: 2023/11/20 18:59:38 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Iterates the list ’lst’ and applies the function ’f’ 
//on the content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list_ptr;

	if (!lst)
		return ;
	list_ptr = lst;
	while (list_ptr)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}
