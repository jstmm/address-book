CC=/usr/bin/gcc
CFLAGS=-Wall -g

all: address_book

address_book: main.o menu.o storage.o
	$(CC) $(CFLAGS) $^ -o address_book

%.o: src/%.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f *.o address_book
