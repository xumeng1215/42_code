#Makefile

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c args.c operation.c
HEADERS = ft.h

OBJ = $(SRC:.c=.o)
TARGET = do-op

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(TARGET)