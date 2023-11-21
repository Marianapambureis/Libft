/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:56:56 by mreis             #+#    #+#             */
/*   Updated: 2023/11/16 18:31:04 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description: 
//the bzero()function writes n zeroes bytes to the string s. If n is 
//zero, bzero()does nothing.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i++] = 0;
	}
}

// int	main(void)
// {
// 	char	str[] = "Hello";
// 	char	str1[] = "Hello";

// 	ft_bzero(str, 4);
// 	bzero(str1, 3);
// 	printf("my %s\n", str);
// 	printf("Not %s\n", str1);	
// 	return (0);
// }
