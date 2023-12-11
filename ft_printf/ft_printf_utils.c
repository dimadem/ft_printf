#include "../include/libftprintf.h"
#include "../include/libft.h"

int  ft_putchar(int c)
{
  write(1, &c, 1);
  return (1);
}

int   ft_putstring(char *string)
{
  int  counter;

  counter = 0;
  while(*string)
  {
    write(1, string++, 1);
    counter++;
  }
  return (counter);
}

int   ft_putpercent()
{
  write(1, "%", 2);
  return (1);
}

int   ft_putnbr(int number)
{
  int length;
  char *temp_number;
  
  length = 0;
  temp_number = ft_itoa(number);
  length = ft_putstring(temp_number);
  free(temp_number);
  return (length);
}
