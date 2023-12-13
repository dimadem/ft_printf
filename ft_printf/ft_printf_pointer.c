/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:50:49 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/12/12 14:55:55 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdint.h>

int	ft_pointerlen(uintptr_t pointer)
{
	int	counter;

	counter = 0;
	while (pointer != 0)
	{
		pointer = pointer / 16;
		counter++;
	}
	return (counter);
}

void	ft_printpointer(uintptr_t pointer)
{
	if (pointer >= 16)
	{
		ft_printpointer(pointer / 16);
		ft_printpointer(pointer % 16);
	}
	else
	{
		if (pointer < 10)
			ft_putchar_fd((pointer + '0'), 1);
		else
			ft_putchar_fd((pointer - 10 + 'a'), 1);
	}
}

int	ft_putpointer(unsigned long long address)
{
	int	counter;

	counter = 0;
	if (address == 0)
		counter += write(1, "(nil)", 5);
	else
	{
		counter += write(1, "0x", 2);
		ft_printpointer(address);
		counter += ft_pointerlen(address);
	}
	return (counter);
}
