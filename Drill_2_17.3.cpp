#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int* p2 = new int[7];
    for (int i = 0; i<7; ++i)
    p2[i] = pow(2,i);

	return 0;
}
