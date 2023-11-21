/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:02:21 by mreis             #+#    #+#             */
/*   Updated: 2023/11/12 19:04:12 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int		size;

	size = 0;
	while (*s++)
	{
		size++;
	}
	return (size);
}
/*
int	main()
{
	char	*s;
	
	s = "hellooooo";
	printf("%d/n", ft_strlen(s));
}
*/