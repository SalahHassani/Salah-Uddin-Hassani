#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void print_array2(ostream& os, int* a, int n){
	for (int i = 0; i < n; ++i)
		os << a[i] << "	";
}

int main()
{
	int myInt = 7;
    int* p1 = &myInt;
    
	int* p2 = new int[7];
    for (int i = 0; i<7; ++i)
    p2[i] = pow(2,i);
    
    int* p3 = p2;
     
    p2 = p1;
   /*
    cout << "p2 : " << p2 << "\n";
    cout << "print_array :   ";
    print_array2(cout,p2, 7);
*/
	return 0;
}
