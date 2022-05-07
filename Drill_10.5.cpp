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
	Point points;
	
	ofstream ost ("myFile.txt", ios::app);
	if (!ost) throw ("can't open input file inputFile.txt...");
	
	vector<double> original_points;
	vector<double> processed_points;
	for (int p=0 ; p<7; p++ ){
		cout<<"Enter X coordinate : ";
		cin>>points.x;
		original_points.push_back(points.x);
		
		cout<<"Enter Y coordinate : ";
		cin>>points.y;
		original_points.push_back(points.y);
}
	
	for (int p = 0 ; p < original_points.size(); p = p+2 ){
		//cout<<"(X, Y) = (" << original_points[p] << ", " << original_points[p+1] << ")\n";
		//cout <<"(X, Y) = (" << points.x << ", " << points.y << ")\n";
		ost << original_points[p] <<"\n"<< original_points[p+1] <<"\n";
}
	ost.close();
	
	ifstream ist;// ("inputFile.txt");
	ist.open("myFile.txt", ios::app);
	if (!ist) throw ("can't open input file inputFile.txt...");
	
	double num;
	for (int p = 0 ; p < original_points.size(); p++ ){
		
		ist >>num;
		processed_points.push_back(num);
		
}
 		
	return 0;

} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cout << "Some error happened, File can't be opened...'\n";
	return 2;
}
