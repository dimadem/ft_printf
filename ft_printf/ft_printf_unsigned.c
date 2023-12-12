/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:51:24 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/12/11 13:42:52 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int	ft_unumlen(unsigned int input_number)
{
	int	count;

	count = 0;
	while (input_number != 0)
	{
		input_number = input_number / 10;
		count++;
	}
	return (count);
}

char	*ft_uitoa(unsigned int input_number)
{
	char	*number;
	int		length;

	length = ft_unumlen(input_number);
	number = (char *)malloc(sizeof(char) * (length + 1));
	if (!number)
		return (0);
	while (input_number != 0)
	{
		number[length - 1] = input_number % 10 + 48;
		input_number = input_number / 10;
		length--;
	}
	return (number);
}

int	ft_putunsigned(unsigned int input_number)
{
	int		count;
	char	*number;

	number = ((void *)0);
	count = 0;
	if (number == 0)
		count += write(1, "0", 1);
	else
	{
		number = ft_uitoa(input_number);
		count += ft_putstring(number);
		free(number);
	}
	return (count);
}
