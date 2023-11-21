/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:30:03 by mreis             #+#    #+#             */
/*   Updated: 2023/11/12 16:36:45 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	i = 1;

	(void)argc;
	while (argv[i])
	{
		printf("%s\n -> %i\n\n",
			argv[i],
			(ft_isalpha(argv[i])));
		i++;
	}
	return (0);
}
*/
