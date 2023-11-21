/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:21:52 by mreis             #+#    #+#             */
/*   Updated: 2023/11/12 18:43:13 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*result;

	result = s + ft_strlen(s);
	while (result >= s && *result != (char)c)
		result--;
	if (result >= s)
		return ((char *)result);
	else
		return (0);
}

/*int	main(void)
{
	const char	source[] = "lets do it";
	const char	find = 'd';
	char	*result;

	result = ft_strrchr(source, find);
	printf("%s\n", result);
	return (0);
}
*/