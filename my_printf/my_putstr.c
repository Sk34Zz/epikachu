/*
** test.c for  in /home/wasile_g/rendu/Piscine_C_J04
** 
** Made by Guillaume Wasilewski
** Login   <wasile_g@epitech.net>
** 
** Started on  Thu Oct  1 12:03:31 2015 Guillaume Wasilewski
** Last update Mon Nov 16 11:30:46 2015 Guillaume Wasilewski
*/

int	my_putstr(char *str)
{
  int	a;
  int	b;
  char	null[] = "(null)";

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
    {
      while	(str[a] != '\0')
	{
	  my_putchar(str[a]);
	  a = a + 1;
	}
    }
}
