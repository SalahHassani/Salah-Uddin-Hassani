#include <iostream>

using namespace std;

int main()
{
	int* freeStore = new int[10];// { 101, 102, 103, 4, 5, 6, 7, 8, 9, 10 };
	//printing values...
	cout<<"Printing values : ";
	for (int i = 0; i < 11; ++i){
		freeStore[i] = 100+i; 
		cout << freeStore[i] << "	";	//Printing 11 elements...
}
	delete[] freeStore; 	//Deleting freeStore pointer array...
	/*cout<<"\nPrintung values after Dellocation : ";
	for (int i = 0; i < 10; ++i)
		cout <<freeStore[i] << "	";
		*/
	return 0;
}
