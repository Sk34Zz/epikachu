/*
** my_strlen.c for  in /home/wasile_g/rendu/Piscine_C_J04
** 
** Made by Guillaume Wasilewski
** Login   <wasile_g@epitech.net>
** 
** Started on  Thu Oct  1 16:27:28 2015 Guillaume Wasilewski
** Last update Thu Oct  1 16:44:52 2015 Guillaume Wasilewski
*/

int     my_strlen(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
    a = a + 1;
  return (a);
}
