#include <iostream>
#include <vector>

using namespace std;

vector<int> gv;

int main()
{
	for (int i = 1; i < 11; i++)
		gv.push_back(i*2);
	
	return 0;
}
