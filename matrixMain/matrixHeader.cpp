#include <vector>
#include "matrixHeader.h"

using namespace std;

matrix::matrix(int vLengthOne, int vLengthTwo) {
	mat.resize(vLengthOne);
	for (int i = 0; i < vLengthOne; i++)
		mat[i].resize(vLengthTwo);
}

void matrix::setCell(int x, int y, int num) {
	mat[x][y] = num;
}