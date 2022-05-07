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
	ist.open("inputFile.txt", ios::app);
	if (!ist) throw ("can't open input file inputFile.txt...");
	
	Point points;
	
	vector<double> original_points;
	for (int p=0 ; p<7; p++ ){
		cout<<"Enter X coordinate : ";
		cin>>points.x;
		ist>>points.x;
		original_points.push_back(points.x);
		
		cout<<"Enter Y coordinate : ";
		cin>>points.y;
		ist>>points.y;
		original_points.push_back(points.y);
}
	ofstream ost ("outputFile.txt", ios::app);
	if (!ost) throw ("can't open input file inputFile.txt...");
	
	for (int p = 0 ; p < original_points.size(); p = p+2 ){
		cout<<"(X, Y) = (" << original_points[p] << ", " << original_points[p+1] << ")\n";
		//cout <<"(X, Y) = (" << points.x << ", " << points.y << ")\n";
		//ost << "(X, Y) = (" << points.x << ", " << points.y << ")\n";
		ost << "(X, Y) = (" << original_points[p] << ", " << original_points[p+1] << ")\n";
}
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
