/*
** my_put_nbr.c for  in /home/wasile_g/my_printf
** 
** Made by Guillaume Wasilewski
** Login   <wasile_g@epitech.net>
** 
** Started on  Wed Nov  4 14:14:54 2015 Guillaume Wasilewski
** Last update Wed Nov  4 14:15:14 2015 Guillaume Wasilewski
*/

void    my_put_nbr(int nb)
{
  int   result;
  int   diviseur;

  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nb < 0)
        {
          my_putchar('-');
          nb = -nb;
        }
      diviseur = 1;
      while ((nb / diviseur) >= 10)
        diviseur = diviseur * 10;
      while (diviseur > 0)
        {
          result = (nb /diviseur) % 10;
          my_putchar(48 + result);
          diviseur = diviseur / 10;
        }
    }
}
