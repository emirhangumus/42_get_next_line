SRCS = get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)
NAME = get_next_line
CC = gcc
RM = rm -f
ARFLAGS = -rc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=4000

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all