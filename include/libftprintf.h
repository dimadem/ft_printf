#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h> // printf

int   ft_printf(const char *, ...);
int   ft_putchar(int c);
int   ft_putstring(char *string);
int   ft_putpointer(unsigned long long address);
int   ft_putnbr(int number);
int   ft_putunsigned(unsigned int number);
int   ft_puthexadecimal(unsigned int input_number, const char format);
int   ft_putpercent();

#endif
