/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:39:36 by mreis             #+#    #+#             */
/*   Updated: 2023/11/12 17:49:51 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char )c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	str[35] = "Hello they are looking";
// 	const int	ch = 'a';
// 	void		*res;

// 	res = ft_memchr(str, ch, 12);
// 	printf("%ld\n", (char *)res - str);
// 	return (0);
// }
