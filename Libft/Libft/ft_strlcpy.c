/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:55:34 by mreis             #+#    #+#             */
/*   Updated: 2023/11/12 18:15:22 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
	{
		return (len);
	}
	while (src [i] != '\0' && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	destination [20];
	const char	source [] = "we made it agaiN * ";
	size_t	size = 12;
	size_t	result = ft_strlcpy(destination, source, size);

	printf("source: %s\n", source);
	printf("Destination afther copying: %s\n", destination);
	printf("number of characters copied: %zu\n", result);
	return (0);
}
*/