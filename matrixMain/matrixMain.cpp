#include <iostream>
#include <vector>
#include "Matrix.h"

using namespace std;

int main()
{
	Matrix test = Matrix(1, 1);

	test.setCell(0, 0, 5);

	cout << test.getCell(0, 0);
}

