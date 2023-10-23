CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)
NAME = result
RM = rm

all:$(OBJ)
	$(CC) $(OBJ) -o $(NAME)
	./result

first:
	$(CC) -c -o $(SRC)

clean:
	$(RM) -rf *~ $(NAME) $(OBJ)
