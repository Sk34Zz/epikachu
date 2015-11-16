##                                                                              
## Makefile for in /home/wasile_g/rendu/Piscine_C_J11
##                                                                              
## Made by Guillaume Wasilewski                                                 
## Login   <wasile_g@epitech.net>                                               
##                                                                              
## Started on  Mon Oct 12 10:23:27 2015 Guillaume Wasilewski                    
## Last update Thu Nov  5 11:29:25 2015 Guillaume Wasilewski
##


SRC=    $(wildcard *.c)

NAME=	libmy

CC=	cc

OBJ=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) -c $(SRC)
	ar r $(NAME).a $(OBJ)
	ranlib $(NAME).a

clean:
	rm $(OBJ)
