#include <iostream>

using namespace std;

void swap_v(int a,int b){
 int temp; temp = a; a=b; b=temp; // it will swap values here but won't change the values in main()...
 //cout<<"x = "<<a<<"  &  y = "<<b;
 
  }
  
 void swap_r(int& a,int& b){
 int temp; temp = a; a=b; b=temp;
 //cout<<"x = "<<a<<"  &  y = "<<b;
  }
  
// This function does not compile as we are trying to assign values to
// read-only references. So we can safely discard it.
/*int swap_cr(const int& a, const int& b){
 int temp; temp = a; a = b; b = temp;
 
  }*/

int main(){
	int x = 7;
	int y = 9;
	
	cout<<"\npass by value\n";
	 swap_v(x, y);   												  // Compiles but does not swap anything,
	 																 //b/c swap_v only handels copies of its arguments.     
	//swap_v(7,9); 													// compiles ... but won't swap it b/c args get its copies...
	cout << "x = " << x << "   &   y = " << y << '\n';	   //  x = 7, & y = 9 ...
	
	cout<<"\npass by raference\n";
	// swap_r(7, 9);											  // won't compile as a reference could not be
																 // initialized becouse there is no refrence
	swap_r(x,y);												//  Compiles and swap values...
	cout << "x = " << x << "   &   y = " << y << '\n'; //  x = 9, & y = 7 ...
	
	 int cx = 7;
	 int cy = 9;
	 
	cout<<"\npass by const raference\n";
	//swap_cr(cx,cy);								     // won't compile
	
	
	cout<<"\npass by value\n";
	//swap_cr(7.7,9.9); 							     // won't compile...
	// swap_v(7.7, 9.9);   						    // Compiles but does nothing. Same reason as swap_v(7,9)
    // swap_r(7.7, 9.9);   						   // Does not compile. Same reason as swap_r(7,9)
	cout << "cx = " << cx << " & cy = " << cy << '\n';
	
	double dx = 7.7;
	double dy = 9.9;
	
	
	//swap_dr(dx,dy);
	//swap_dr(7.7,9.9);
	cout << "cx = " << cx << " & cy = " << cy << '\n';
	return 0;
}
