CC=g++

all: array

array: in_out_array.o
	$(CC) in_out_array.o -o in_out_array

in_out_array.o: in_out_array.cpp
	$(CC) in_out_array.cpp

clean:
	rm -rf *.o array	
