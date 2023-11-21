/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:15:28 by mreis             #+#    #+#             */
/*   Updated: 2023/11/04 15:36:53 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*int	main(void)
{
	const char	input[30] = "This is a lets do it";
	const char	find = 'a';
	char	*result;

	result = ft_strchr(input, find);
	printf("%s\n", result);
	return (0);
}
*/