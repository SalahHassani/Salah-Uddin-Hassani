#include <iostream>

using namespace std;

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int arr[], int num){		// part a
	int la[10];		// part b;
	for (int i = 0; i < num; i++) 	//part c
		la[i] = ga[i];
		
	cout<<"\nValues in la (local array) : ";
	for (int i = 0; i < num; i++)	// part  d...
		cout<<la[i]<<" ";	
		
	int* p = new int[num];
	for (int i = 0; i < num; i++) 	// part e...
			p[i] = ga[i];
			
		cout<<"\nValues in p (pointer array) : ";
	for (int i = 0; i < num; i++) 	// part f...
		cout<<p[i]<<" ";
		
		delete[] p; // part g...
		
	cout<<"\nValues in arr[](array) : ";
	for (int i = 0; i < num; i++) 	// part f...
		cout<<arr[i]<<" ";
}

int main()
{
	f(ga, 10);
	int aa[10];
	for(int i=1; i<11; i++){
		int n = 1;
		for(int j=i; j>0; --j)
			n = n*j;
		aa[i-1] = n;
	}
	cout<<"\n\n"<<endl;
	f(aa, 10);
	
	return 0;
}
