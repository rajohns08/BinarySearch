#include "BinarySearch.h"
#include "BinarySearch.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<double> testArray(10);

	for (size_t i = 0; i < testArray.size(); i++)
	{
		testArray[i] = i+1;
	}

	for (size_t i = 0; i < testArray.size(); i++)
	{
		cout << testArray[i] << endl;
	}

	BinarySearch<double> bsObj;

	int position = bsObj.binarySearch(testArray, 10.1);

	if (position == -1)
	{
		cout << "Element does not exist in array. Position = " << position << endl;
	}
	else
	{
		cout << "Element found at position " << position << endl;
	}

	cin.get();
	return 0;
}