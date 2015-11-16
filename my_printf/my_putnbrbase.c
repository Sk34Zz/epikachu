/*
** deci_octal.c for  in /home/wasile_g/my_printf
** 
** Made by Guillaume Wasilewski
** Login   <wasile_g@epitech.net>
** 
** Started on  Wed Nov  4 14:39:28 2015 Guillaume Wasilewski
** Last update Mon Nov 16 13:39:05 2015 Guillaume Wasilewski
*/

void	my_putnbrbase(int nb, char *base_to)
{
  int	res;
  int	dive;
  int	size_base;

  dive = 1;
  size_base = my_strlen(base_to);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  while ((nb / dive) >= size_base)
    dive = dive * size_base;
  while (dive > 0)
    {
      res = (nb / dive) % size_base;
      my_putchar(base_to[res]);
      dive = dive / size_base;
    }
}
