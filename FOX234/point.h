#pragma once// корректирует обращение к файл 
#include "FILE.h"
class Point
{

	int x;
	int y;
	int z;
public: 
	
	Point(int x, int y1, int z1); 
	Point() :x{ 0 }, y{ 0 }, z{ 0 } {
		
	};
	void input();
	void output(); 

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	void setZ(int v) { z = v; }
	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }
	void SavePoint() {
		char path[20],mode[3];
	
		gets_s(path);
		gets_s(mode);
		FileOpen file{ path,mode };
		file.Save(x, y, z);
	};
	void LoardPoint() {
		char path[20], mode[3];

		gets_s(path);
		gets_s(mode);
		FileOpen file{ path,mode };
		file.Load(x, y, z);


	};

};


