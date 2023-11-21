/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:16:50 by mreis             #+#    #+#             */
/*   Updated: 2023/11/12 18:29:27 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	while (dst[i] && i < size)
	{
		i++;
	}
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	return (i + len);
}

/*int	main(void)
{
	char	dest[20] = "guys";
	char	source[] = "hello ";
	size_t	size = 12;
	size_t	result = ft_strlcat(dest, source, size);

	printf("source: %s\n", source);
	printf("Destination afther copying: %s\n", dest);
	printf("number of characters copied: %zu\n", result);
	return (0);
}
*/