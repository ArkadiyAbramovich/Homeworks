CC=g++

figure: source.o figure.o triangle.o right_triangle.o IsoscelesTriangle.o EquilateralTriangle.o Quadrilateral.o Rectangle.o Square.o Parallelogram.o Rhombus.o 
	$(CC) source.o figure.o triangle.o right_triangle.o IsoscelesTriangle.o EquilateralTriangle.o Quadrilateral.o Rectangle.o Square.o Parallelogram.o Rhombus.o -o figure

source.o: source.cpp
	$(CC) -c source.cpp -o source.o

figure.o: figure.cpp
	$(CC) -c figure.cpp -o figure.o

triangle.o: triangle.cpp
	$(CC) -c triangle.cpp -o triangle.o

right_triangle.o: right_triangle.cpp
	$(CC) -c right_triangle.cpp -o right_triangle.o

IsoscelesTriangle.o: IsoscelesTriangle.cpp
	$(CC) -c IsoscelesTriangle.cpp -o IsoscelesTriangle.o

EquilateralTriangle.o: EquilateralTriangle.cpp
	$(CC) -c EquilateralTriangle.cpp -o EquilateralTriangle.o

Quadrilateral.o: Quadrilateral.cpp
	$(CC) -c Quadrilateral.cpp -o Quadrilateral.o

 Rectangle.o:  Rectangle.cpp
	$(CC) -c  Rectangle.cpp -o  Rectangle.o

Square.o: Square.cpp
	$(CC) -c Square.cpp -o Square.o

Parallelogram.o: Parallelogram.cpp
	$(CC) -c Parallelogram.cpp -o Parallelogram.o

Rhombus.o: Rhombus.cpp
	$(CC) -c Rhombus.cpp -o Rhombus.o

clean:
	rm -rf figure