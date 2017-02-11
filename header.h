
// Search function for find the number

int search(int arr[], size_t size, int search_num)
{
	int min = 0;					// Where the array starts
	int max = size - 1; 			// Where the array ends
	int mid = 0;					// Middle of the array

	while( min <= max )
	{
		mid = ( min + max ) / 2;	// Expression for the middle index

		if( arr[mid] == search_num )
		{
			std::cout << "Found in index: [" << mid << "]\n";
			return mid;				// Was found!
		}
		else if( arr[mid] < search_num )
		{
			min = mid + 1;			// Start of the array is equal middle array + 1
		}
		else 
		{
			max = mid - 1;			// End of the array is equal middle array - 1
		}

	}

	return -1; 						// If the number not exist
}
