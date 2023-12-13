/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:50:59 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/12/11 13:27:19 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstring(char *string)
{
	int	counter;

	counter = 0;
	while (*string)
	{
		write(1, string++, 1);
		counter++;
	}
	return (counter);
}

int	ft_putpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_putnbr(int number)
{
	int		length;
	char	*temp_number;

	length = 0;
	temp_number = ft_itoa(number);
	length = ft_putstring(temp_number);
	free(temp_number);
	return (length);
}
