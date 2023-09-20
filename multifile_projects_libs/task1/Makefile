CC=g++

math: source.o math.o
	$(CC) source.o math.o -o math

math.o: math.cpp
	$(CC) -c math.cpp -o math.o

source.o: source.cpp
	$(CC) -c source.cpp -o source.o

clean:
	rm -rf math