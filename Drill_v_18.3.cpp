#include <iostream>
#include <vector>

using namespace std;

vector<int> gv;

void f(vector<int> myvector, int num){
		vector<int> lv(num);		// part b;
	for (int i = 0; i < num; i++) 	//part c
		lv[i] = gv[i];
	
	cout<<"\nValues in lv (local vector) : ";
	for (int i = 0; i < num; i++)	// part  d...
		cout<<lv[i]<<" ";	
		
		vector<int> lv2(num);
	cout<<"\nValues in lv2 (local vector 2) : ";
	for (int i = 0; i < num; i++) 	// part f...
		cout<<lv2[i]<<" ";
}

int main()
{
	for (int i = 1; i < 11; i++)
		gv.push_back(i*2);
	
	return 0;
}
