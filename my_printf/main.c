/*
** main.c for  in /home/wasile_g/rendu/PSU_2015_my_printf
** 
** Made by Guillaume Wasilewski
** Login   <wasile_g@epitech.net>
** 
** Started on  Mon Nov 16 09:27:46 2015 Guillaume Wasilewski
** Last update Mon Nov 16 13:43:21 2015 Guillaume Wasilewski
*/
int	main()
{
  char	str[]= "hello";
  my_printf("test %%123%123%% %S %d octal 12 = %o\n >lol: %o\n >nop:%s\n >nop:%S\n", str, 123, 12, 12, "", "");
}
