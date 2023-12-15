/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmdemirk <dmdemirk@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:50:40 by dmdemirk          #+#    #+#             */
/*   Updated: 2023/12/15 15:11:53 by dmdemirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putformat(va_list *args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(*args, int));
	else if (format == 's')
		count += ft_putstring(va_arg(*args, char *));
	else if (format == 'p')
		count += ft_putpointer(va_arg(*args, unsigned long long));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(*args, int));
	else if (format == 'u')
		count += ft_putunsigned(va_arg(*args, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_puthexadecimal(va_arg(*args, unsigned int), format);
	else if (format == '%')
		count += ft_putpercent();
	else
		count = 1;
	return (count);
}

int	ft_printf(const char *string, ...)
{
	int		index;
	int		count;
	va_list	args;

	index = 0;
	count = 0;
	va_start(args, string);
	while (string[index] != '\0')
	{
		if (string[index] == '%')
		{
			count += ft_putformat(&args, string[index + 1]);
			index++;
		}
		else
			count += ft_putchar(string[index]);
		index++;
	}
	va_end(args);
	return (count);
}
