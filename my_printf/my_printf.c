/*
** my_printf.c for  in /home/wasile_g
** 
** Made by Guillaume Wasilewski
** Login   <wasile_g@epitech.net>
** 
** Started on  Wed Nov  4 11:37:45 2015 Guillaume Wasilewski
** Last update Mon Nov 16 13:42:57 2015 Guillaume Wasilewski
*/
#include "stdarg.h"

int	my_process_per(va_list ap, int a, const char *str)
{
  if (str[a] == '%' && str[a + 1] == 's')
    my_putstr(va_arg(ap, char *));
  if (str[a] == '%' && str[a + 1] == 'd')
    my_put_nbr(va_arg(ap, int));
  else if (str[a] == '%' && str[a + 1] == 'c')
    my_putchar(va_arg(ap, char *));
  else if (str[a] == '%' && str[a + 1] == 'o')
    my_putnbrbase(va_arg(ap, int), "01234567");
  else if (str[a] == '%' && str[a + 1] == 'b')
    my_putnbrbase(va_arg(ap, int), "01");
  else if (str[a] == '%' && str[a + 1] == 'x')
    my_putnbrbase(va_arg(ap, int), "0123456789abcdef");
  else if (str[a] == '%' && str[a + 1] == 'X')
    my_putnbrbase(va_arg(ap, int), "0123456789ABCDEF");
  else if (str[a] == '%' && str[a + 1] == 'S')
    my_putstr_s(va_arg(ap, char *));
  else if (str[a] == '%' && str[a + 1] == 'n')
    my_strlen(str);
  else if (str[a] == '%' && str[a + 1] == '%')
    my_putchar('%');
  return (0);
}

int	my_process(va_list ap, int a, const char *str)
{
  if (str[a] != '%')
    {
      my_putchar(str[a]);
      a = a - 1;
    }
  return (a);
}

int	my_printf(const char *str, ...)
{
  int	a;
  va_list ap;
  int	b;
  int	c;

  b = 0;
  va_start(ap, str);
  a = 0;
  while (str[a] != '\0')
    {
      b = a;
      if (str[a] == '\\' && str[a + 1] == 'n')
	a = 1;
      my_process_per(ap, a, str);
      b = my_process(ap, a, str);
      if (b != a)
	a = b;
      a = a + 2;
    }
  if (a == 1)
    my_putchar('\n');
}
