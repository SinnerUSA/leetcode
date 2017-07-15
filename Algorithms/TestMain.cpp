#include <iostream>
#include "TwoSum.h"

using namespace std;

int main()
{
	int a[] = { 3,2,4 };
	vector<int> n(a, a + sizeof(a) / sizeof(int));
	vector<int> result = TwoSum::twoSum(n, 6);
	TwoSum::printMatrix(result);

	return 0;
}