#define _USE_MATH_DEFINES
#include"shape.hxx"
#include<cmath>

Shape::Shape(int _type, int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8) {

	type = _type;
	TypesOfShape types = static_cast<TypesOfShape>(_type);
	// заполн¤ем координаты фигуры
	switch (types)
	{
	case TypesOfShape::line: 
		x1 = _x1; y1 = _y1;
		x2 = _x2; y2 = _y2;
		break;
	case TypesOfShape::sqr:
		x1 = _x1; y1 = _y1;
		x2 = _x2; y2 = _y2;
		x3 = _x3; y3 = _y3;
		x4 = _x4; y4 = _y4;
		break;
	case TypesOfShape::cube:
		x1 = _x1; y1 = _y1; z1 = _z1;
		x2 = _x2; y2 = _y2; z2 = _z2;
		x3 = _x3; y3 = _y3; z3 = _z3;
		x4 = _x4; y4 = _y4; z4 = _z4;
		x5 = _x5; y5 = _y5; z5 = _z5;
		x6 = _x6; y6 = _y6; z6 = _z6; 
		x7 = _x7; y7 = _y7; z7 = _z7;
		x8 = _x8; y8 = _y8; z8 = _z8;
		break;
	default:
		break;
	}
}

Shape::Shape(int _type, int _x1, int _y1, double R, double H) {

	type = _type;
	TypesOfShape types = static_cast<TypesOfShape>(type);
	// заполн¤ем координаты фигуры
	switch (types)
	{
	case TypesOfShape::circle:
		x1 = _x1; y1 = _y1;
		radius = R;
		break;
	case TypesOfShape::cylinder:
		x1 = _x1; y1 = _y1;
		radius = R;
		height = H;
		break;
	default:
		break;
	}
}


double Shape::sqrtOfFigure(int _type) {
	
	TypesOfShape types = static_cast<TypesOfShape>(_type);
		// стороны фигуры
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);
	// считаем площадь фигуры
	switch (types)
	{
	case TypesOfShape::line:
		square = 0;
		break;
	case TypesOfShape::sqr:
		square = a * b;
		break;
	case TypesOfShape::cube:
		square = 2 * a * b + 2 * a * c + 2 * b * c;
		break;
	case TypesOfShape::circle:
		square = M_PI * radius * radius;
		break;
	case TypesOfShape::cylinder:
		square = M_PI * radius * radius + 2 * radius * height;
		break;
	default:
		break;
	}
	return square;
}

double Shape::volumeOfFigure(int _type) {

	TypesOfShape types = static_cast<TypesOfShape>(_type);
			// стороны фигуры
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);
		// считаем объем фигуры
	switch (types)
	{
	case TypesOfShape::line:
		volume = 0;
		break;
	case TypesOfShape::sqr:
		volume = 0;
		break;
	case TypesOfShape::cube:
		volume = a * b * c;
		break;
	case TypesOfShape::circle:
		volume = 0;
		break;
	case TypesOfShape::cylinder:
		volume = M_PI * radius * radius * height;
		break;
	default:
		break;
	}
	return volume;
}
