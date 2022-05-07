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
	for (int i = 0; i < num; i++) 	//part c
		lv2[i] = myvector[i];
		
	cout<<"\nValues in lv2 (local vector 2) : ";
	for (int i = 0; i < num; i++) 	// part f...
		cout<<lv2[i]<<" ";
}

int main()
{	int n = 1;
	for (int i = 0; i < 10; i++){
		if(i == 0)
			n = 1;
		else
			n *= 2;
		gv.push_back(n);
}
	f(gv, 10);
	
	vector<int> vv;
		for(int i=1; i<11; i++){
		 n = 1;
		for(int j=i; j>0; --j)
			n = n*j;
		vv.push_back(n);
	}
		f(vv, 10);
		
	return 0;
}
