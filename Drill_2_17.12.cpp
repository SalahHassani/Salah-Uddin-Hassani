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
     
    p1 = p2;
    
    p2 = p3;
   	cout << "p1 : " << p1 << "\n";
    cout << "print_array :   ";
    print_array2(cout,p1, 7);
    
    cout<< "\n\n";
    
    cout << "p2 : " << p2 << "\n";
    cout << "print_array :   ";
    print_array2(cout,p2, 7);
    
    p1 = 0;
    delete[] p2;
    p3 = 0;
    
    p1 = new int[10];
    for (int i = 0; i<10; ++i)
        p1[i] = pow(2,i);

    p2 = new int[10];
    cout<< "\n\n";
    for (int i = 0; i<10; ++i)
        p2[i] = p1[i];
        
    print_array2(cout,p2,10);


	return 0;
}
