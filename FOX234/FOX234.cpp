
#include <iostream>
#include <vector>
#include <iomanip>
#include "point.h"
#include "FILE.h"
#define M  8;// мфкрос
#undef AVA //удаляет константные значения
using namespace std;

Point::Point(int x, int y1, int z1) {
	
}

void Point::input() {
	cin >> x >> y >> z;
}
void Point::output() {
	cout << x << y << z;
}






int main()
{


	Point point{6,6,8};
	Point Point1 {6,6,8};
	int a = 9;
	int d{ 7 };
	point.setX(1);
	point.setY(6);
	point.setZ(3);
	Point1.output();
	point.SavePoint();




	
}
