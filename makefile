CFLAGS= -Werror -c

.PHONY: clean

bin/vklad: build/vklad.o build/deposit.o
	gcc build/vklad.o build/deposit.o -o bin/vklad

build/vklad.o: src/vklad.c
	gcc $(CFLAGS) src/vklad.c -o build/vklad.o

build/deposit.o: src/deposit.c
	gcc $(CFLAGS) src/deposit.c -o build/deposit.o 

clean:
	rm -rf bin/vklad build/deposit.o build/vklad.o
