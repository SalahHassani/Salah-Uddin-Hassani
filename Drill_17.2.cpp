#include <iostream>

using namespace std;

int main()
{
	int* freeStore = new int[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printing values...
	for (int i = 0; i < 10; ++i)
		cout << freeStore[i] << endl;	

	return 0;
}
