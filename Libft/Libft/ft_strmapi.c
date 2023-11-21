/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:51:56 by mreis             #+#    #+#             */
/*   Updated: 2023/11/15 20:19:51 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’
//Original: 'lest try again!'
//Mapped:   'LeSt tRy aGaIn!'  

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char myMappingFunction(unsigned int index, char c)
// {
// 	if (index % 3 == 0) {
// 		return toupper(c);
// 	} else {
// 		return c;
// 	}
// }

/* int	main(void)
{
	const char *original = "lest try again!";

	 // Call ft_strmapi to create a new string using the example mapping function
	char *mappedString = ft_strmapi(original, myMappingFunction);  // Removed &

	 if (mappedString != NULL)
	{
		// Print the original and mapped strings
		printf("Original: '%s'\n", original);

		printf("Mapped:   '%s'\n", mappedString);	
				
		 // Don't forget to free the allocated memory
		
		free(mappedString);
	}
	else
	{
		printf("Memory allocation error or input string is NULL.\n");
	}

	return 0;
}
*/