/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis <mreis@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:12:21 by mreis             #+#    #+#             */
/*   Updated: 2023/11/14 20:25:15 by mreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the character ’c’ to the given filedescriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
