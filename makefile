CFLAGS =-Wall -Werror -c
TFLAGS =-I thirdparty -I src  
.PHONY: clean test

bin/vklad: build/src/vklad.o build/src/deposit.o
	gcc build/src/vklad.o build/src/deposit.o -o bin/vklad

build/src/vklad.o: src/vklad.c
	gcc $(CFLAGS) src/vklad.c -o build/src/vklad.o

build/src/deposit.o: src/deposit.c
	gcc $(CFLAGS) src/deposit.c -o build/src/deposit.o 

clean:
	rm -rf bin/vklad bin/deposit-test build/*.o

test: deposit-test

deposit-test: build/test/vklad.o build/test/deposit-test.o build/src/deposit.o
	gcc build/test/vklad.o build/test/deposit-test.o build/src/deposit.o -o bin/deposit-test

build/test/vklad.o: test/vklad.c
	gcc $(TFLAGS) $(CFLAGS) test/vklad.c -o build/test/vklad.o

build/test/deposit-test.o: test/deposit-test.c
	gcc $(TFLAGS) $(CFLAGS) test/deposit-test.c -o build/test/deposit-test.o