/*
** test.c for  in /home/wasile_g/rendu/Piscine_C_J04
** 
** Made by Guillaume Wasilewski
** Login   <wasile_g@epitech.net>
** 
** Started on  Thu Oct  1 12:03:31 2015 Guillaume Wasilewski
** Last update Mon Nov 16 11:35:00 2015 Guillaume Wasilewski
*/

int	my_putstr_s_re(char *str, int a)
{
  while	(str[a] != '\0')
    {
      if (str[a] < 32 || str[a] >= 127)
	{
	  my_putchar(92);
	  my_putchar('0');
	  my_putnbrbase(str[a], "0123456789");
	}
      else
	my_putchar(str[a]);
      a = a + 1;
    }
}

int	my_putstr_s(char *str)
{
  int   a;
  int   b;
  char  null[] = "(null)";

  a = 0;
  b = 0;
  b = my_strlen(str);
  if (b == 0)
    {
      while (null[a] != '\0')
        {
          my_putchar(null[a]);
          a = a + 1;
        }
    }
  else
    my_putstr_s_re(str, a);
}
