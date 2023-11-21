/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:32:57 by mreis             #+#    #+#             */
/*   Updated: 2023/11/18 20:51:24 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be added to the list.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
