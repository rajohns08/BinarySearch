#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <vector>

using namespace std;

template <class T>
class BinarySearch
{
public:
	// template for binary searching arrays
	int binarySearch(T arr[], int numberOfElements, T value);

	// template for binary searching vectors
	int binarySearch(vector<T> arr, T value);
};

#endif