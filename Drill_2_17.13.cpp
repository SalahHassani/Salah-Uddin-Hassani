#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

  void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\t";
}

int main()
{
    vector<int> v1; 
    vector<int> v2;
    
    for (int i = 0; i<10; ++i)
        v1.push_back(pow(2,i));
    
    for (int i = 0; i<v1.size(); ++i)
        v2.push_back(v1[i]);
        
    print_vector(cout,v2); 
	return 0;
}
