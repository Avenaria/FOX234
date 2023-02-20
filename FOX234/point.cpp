#include "point.h"
#include "FILE.h"
void FileOpen::Save(int x, int y, int z) {
	fprintf(f, " x = %d, y = %d, z = %d", x, y, z);
};
void FileOpen::Load(int& x, int& y, int& z) {
	while (!feof(f)) {
		fscanf_s(f, "%d%d%d", &x, &y, &z);
		printf(" x = %d, y = %d, z = %d", x, y, z);

	
};