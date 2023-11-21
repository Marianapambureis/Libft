/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:10:27 by mreis             #+#    #+#             */
/*   Updated: 2023/11/19 16:54:08 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts the number of nodes in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		cnt;

	new = lst;
	cnt = 0;
	while (new)
	{
		cnt++;
		new = new->next;
	}
	return (cnt);
}
