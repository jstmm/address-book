CC=/usr/bin/gcc
CFLAGS=-Wall -g

all: address_book

address_book: main.o application.o storage.o menu.o
	$(CC) $(CFLAGS) $^ -o address_book

%.o: src/%.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f *.o address_book
