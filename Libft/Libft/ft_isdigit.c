/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:18:12 by mreis             #+#    #+#             */
/*   Updated: 2023/11/12 17:57:44 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	i = 1;

	(void) argc;
	while (argv)
	{
		printf("%s\n -> %i\n\n",
			argv[i],
			(ft_isdigit(argv[i])));
		i++;
	}
	return (0);
}
*/