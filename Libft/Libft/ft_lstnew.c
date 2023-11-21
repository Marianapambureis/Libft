/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:06:32 by mreis             #+#    #+#             */
/*   Updated: 2023/11/18 20:25:15 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable’next’ 
// is initialized to NULL.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list	*train_car;

// 	train_car = ft_lstnew("123!");
// 	if (train_car != NULL)
// 	{
// 		printf("Content: %s\n", (char *)train_car->content);
// 	}
// 	else
// 	{
// 		printf("Error creating train car.\n");
// 	}
// 	free(train_car);
// 	return (0);
// }
