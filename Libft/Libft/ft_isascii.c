/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:46:15 by mreis             #+#    #+#             */
/*   Updated: 2023/11/04 15:37:00 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(int argc, char **argv)
{
	int	i = 1;

	(void) argc;
	while (argv[i])
	{
		printf("%s -> %i\n\n",
			argv[i],
			(ft_isascii(argv[i][0])));
		i++;
	}
	return (0);
}
*/