/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:13:41 by mreis             #+#    #+#             */
/*   Updated: 2023/11/12 17:58:57 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*int		main(int argc, char *argv[])
{
int	i = 1;

	(void) argc;
	while (argv[i])
	{
		printf("%s -> %i\n\n",
			argv[i],
			(ft_isprint(argv[i][0])));
		i++;
	}
	return (0);
}
*/