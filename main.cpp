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

	cout << "Search for a number: "; 
	for(int a : arr)						// for-each implementation
	{
		cout << a << " ";					// Print numbers for users
	}
	cout << "\n";
	
	cin >> guess;							// User guess
	search(arr, size, guess);				// Search for the number entered by the user

	return 0;
}