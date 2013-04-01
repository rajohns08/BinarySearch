#include "BinarySearch.h"
#include <vector>

using namespace std;

// the binarySearch function accepts 3 parameters: an array, the number of elements in that array, and a value to search for in the array
// note: binary search must be dealing with an array that is already sorted.
template <class T>
int BinarySearch<T>::binarySearch(T arr[], int numberOfElements, T value)
{
	// set up variables for binary search to use
	// first index obviously originally set to 0
	int firstIndex = 0;

	// last index obviously obviously originally set to number of elements - 1
	int lastIndex = numberOfElements - 1;

	// middle index is half of first and last index
	int middleIndex = (firstIndex + lastIndex) / 2;

	// position is the variable to be returned. it will return -1 if the value is not found in the array
	int position = -1;

	// bool variable for running while loop
	bool found = false;

	// keep checking new middle index until you have checked every index or until you find the value
	while (!found && firstIndex <= lastIndex)
	{
		// reset middle index at the start of every loop after first or last index has been updated in the previous iteration
		middleIndex = (firstIndex + lastIndex) / 2;

		// the case where the value is found
		if (value == arr[middleIndex])
		{
			found = true;

			// update position so we know where in the array the value was found. we will return this location
			position = middleIndex;
		}
		// since binary search only works with sorted arrays, if the value we are searching for is greater than our value 
		// at the middle index, then we can discard the first half of the array by incrementing the first index to be 
		// middleIndex + 1
		else if (value > arr[middleIndex])
		{
			firstIndex = middleIndex + 1;
		}
		// if the value we are searching for is less than the value at the middle index, then we can discard the second half
		// of the array by updating the last index to be middleIndex - 1
		else
		{
			lastIndex = middleIndex - 1;
		}
	}

	// once the loop is finished return position. if the position was never found, then it will return -1. otherwise it will
	// return the index position of where the value is in the array
	return position;
}

// same function as above except it works for vectors
template <class T>
int BinarySearch<T>::binarySearch(vector<T> arr, T value)
{
	int firstIndex = 0;
	int lastIndex = arr.size() - 1;
	int middleIndex = (firstIndex + lastIndex) / 2;
	int position = -1;
	bool found = false;

	while (!found && firstIndex <= lastIndex)
	{
		middleIndex = (firstIndex + lastIndex) / 2;

		if (value == arr[middleIndex])
		{
			found = true;
			position = middleIndex;
		}
		else if (value > arr[middleIndex])
		{
			firstIndex = middleIndex + 1;
		}
		else
		{
			lastIndex = middleIndex - 1;
		}
	}

	return position;
}