#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "point.h"

class FileOpen
{
	char path[20];
	char mode[3];
	FILE* f;

public:
	FileOpen(const char* p, const char* m) {
		strcpy_s(path, p);
		strcpy_s(mode, m);
		
		fopen_s(&f, path, mode);

	}
	void Save(int,int,int);
	void Load(int&, int&,int&);
	
};

