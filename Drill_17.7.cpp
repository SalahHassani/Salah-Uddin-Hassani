#include <iostream>

using namespace std;

void print_array(ostream& os, int n, int* a){
	for (int i = 0; i < n; ++i){
		a[i] = 1+i;
		os << a[i] << "	";
	}
}

int main()
{
	int* a = new int[100]; // { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	cout<<"Printing values : ";		//printing values...
	print_array(cout,100, a);
	
	delete[] a; 	//Deallocating a pointer array...
	
	return 0;
}
