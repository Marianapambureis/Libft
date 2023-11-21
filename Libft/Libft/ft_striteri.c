/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:20:11 by mreis             #+#    #+#             */
/*   Updated: 2023/11/14 20:11:05 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ on each character ofthe string passed 
// as argument, passing its indexas first argument.
// Each character is passed byaddress to ’f’ to be modified if necessary.
// Index: 0, Character: H
// Index: 1, Character: e
// Index: 2, Character: l
// Index: 3, Character: l
// Index: 4, Character: o

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void print_striteri(unsigned int index, char *character)
// {
// 	printf("Index: %u, Character: %c\n", index, *character);
// }

// int	main(void)
// {
// 	// Example string
// 	char myString[] = "Hello";

// 	 // Applying ft_striteri to print index and character of each element
// 	ft_striteri(myString, &print_striteri);

// 	 return 0;
// }