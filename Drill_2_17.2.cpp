#include <iostream>

using namespace std;

int main()
{
	int myInt = 7;
    int* p1 = &myInt;
    
    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";

	return 0;
}
