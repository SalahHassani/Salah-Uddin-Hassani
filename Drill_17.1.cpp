#include <iostream>

using namespace std;

int main()
{		//Allocating an array of ten ints on the free store using new
	int* freeStore = new int[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	

	return 0;
}
