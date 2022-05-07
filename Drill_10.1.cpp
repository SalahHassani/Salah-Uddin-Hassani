#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Point {
	public:
	double x, y;
};

int main()
try {
	
	ifstream ist;// ("inputFile.txt");
	ist.open("inputFile.txt");
	if (!ist) throw ("can't open input file inputFile.txt...");
	
	Point points;
	int i;
	cout<<"Enter X coordinate : ";
	cin>>points.x;
	ist>>points.x;
	cout<<"Enter Y coordinate : ";
	cin>>points.y;
	ist>>points.y;

	ofstream ost ("outputFile.txt");
	if (!ost) throw ("can't open input file inputFile.txt...");
	
	cout <<"(X, Y) = (" << points.x << ", " << points.y << ")\n";
	ost << "(X, Y) = (" << points.x << ", " << points.y << ")\n";
	
	ist.close();
	ost.close();
 		
	return 0;

} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cout << "Some error happened, File can't be opened...'\n";
	return 2;
}
