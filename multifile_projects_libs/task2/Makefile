CC=g++

calc: source.o calculator.o
	$(CC) source.o calculator.o -o calc

source.o: source.cpp
	$(CC) -c source.cpp -o source.o

calculator.o: calculator.cpp
	$(CC) -c calculator.cpp -o calculator.o

clean:
	rm -rf math