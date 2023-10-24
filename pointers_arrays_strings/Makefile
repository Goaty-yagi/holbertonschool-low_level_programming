CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)
NAME = result
RM = rm
CFLAGS = -pedantic -Werror -Wextra -std=gnu89

all:$(OBJ)
	$(CC) $(OBJ) -o $(NAME)
	./result

first:
	$(CC) -fsanitize=signed-integer-overflow -c -o $(SRC)

clean:
	$(RM) -rf *~ $(NAME) $(OBJ)
