#include <iostream>
#include <vector>
#include "matrixHeader.h"

using namespace std;

int main()
{
	matrix test = matrix(1, 1);

	test.setCell(0, 0, 5);

	cout << test.getCell(0, 0);

}

