/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:05:05 by mreis             #+#    #+#             */
/*   Updated: 2023/11/19 16:26:50 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description
The memset() fills the first N bytes of the value C (converted to an
 unsigned char) to the string S. Write a byte to a byte string
Library : <string.h>
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*int	main()
{
	char str[] = " Hello world";

	ft_memset(str, 'a', 8);
	printf("%s\n", str);
	return (0);
}
*/