/*
	*Binary Search Algorithm
*/
#include <iostream>
#include "header.h"			// Header file for search function

using namespace std;

int main()
{
	int arr[] = {3,7,11,16,27,36};
	int size  = 6;
	int guess = 0;

	cout << "Search for one these numbers: 3  7  11  16  27  36 " 
	     << '\n';

	cin >> guess;							// User guess
	search(arr, size, guess);				// Search for the number entered by the user

	return 0;
}