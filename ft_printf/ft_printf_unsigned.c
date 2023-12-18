/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:51:24 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/12/18 18:02:05 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unumlen(unsigned int input_number)
{
	int	length;
	while (input_number != 0)
	{
		input_number = input_number / 10;
		length++;
	}
	return (length);
}

static char	*ft_uitoa(unsigned int input_number)
{
	char	*number;
	char	length;

	length = ft_unumlen(input_number);
	number = (char *)malloc(sizeof(char) * (length + 1));
	if (!number)
		return (0);
	while (input_number > 0)
	{
		number[length - 1] = input_number % 10 + '0';
		input_number = input_number / 10;
		length--;
	}
	return (number);
}

void	ft_putunsigned(unsigned int input_number, int *counter)
{
	char	*number;

	if (input_number == 0)
		ft_putchar('0', counter);
	else
	{
		number = ft_uitoa(input_number);
		ft_putstring(number, counter);
		free(number);
	}
}
