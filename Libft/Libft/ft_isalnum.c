/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:34:11 by mreis             #+#    #+#             */
/*   Updated: 2023/11/04 15:37:02 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 47 && c < 58)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

/*int	main	(int argc, char **argv)
	{
	int	i = 1;
	(void)argc;
	while (argv[i])
	{
		printf("%s\n -> %i\n\n",
			argv[i],
			(ft_isalnum(argv[i])));
		i++;
	}
	return (0);
}
*/
