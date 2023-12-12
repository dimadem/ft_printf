/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:51:08 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/12/11 13:14:17 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"
#include "../include/libft.h"

static int	ft_hexlen(unsigned int input_number)
{
	int	counter;

	counter = 0;
	while (input_number != 0)
	{
		input_number = input_number / 16;
		counter++;
	}
	return (counter);
}

static void	ft_print_hexadecimal(unsigned int input_number, const char format)
{
	if (input_number >= 16)
	{
		ft_print_hexadecimal(input_number / 16, format);
		ft_print_hexadecimal(input_number % 16, format);
	}
	else
	{
		if (input_number <= 9)
			ft_putchar_fd((input_number + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((input_number - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((input_number - 10 + 'A'), 1);
		}
	}
}

int	ft_puthexadecimal(unsigned int input_number, const char format)
{
	int	count;

	count = 0;
	if (input_number == 0)
		ft_putchar(0);
	else
		ft_print_hexadecimal(input_number, format);
	count += ft_hexlen(input_number);
	return (count);
}
