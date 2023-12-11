#include "../include/libftprintf.h"
#include "../include/libft.h"
#include <stdint.h>

int ft_pointerlen(uintptr_t pointer)
{
  int   counter;

  counter = 0;
  while(pointer != 0)
  {
    pointer = pointer / 16;
    counter++;
  }
  return (counter);
}

void   ft_printpointer(uintptr_t pointer)
{
  if (pointer >= 16)
  {
    ft_printpointer(pointer / 16);
    ft_printpointer(pointer % 16);
  }
  else {
    if (pointer < 10)
      ft_putchar_fd((pointer + '0'), 1);
    else 
      ft_putchar_fd((pointer - 10 + 'a'), 1);
    }
}

int ft_putpointer(unsigned long long address)
{
  int   counter;

  counter = 0;
  counter += write(1, "0x", 2);
  if (address == 0)
    counter += ft_putchar('0');
  else {
    ft_printpointer(address);
    counter += ft_pointerlen(address);
  }
  return (counter);
}
