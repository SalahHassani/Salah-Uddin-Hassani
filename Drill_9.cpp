#include <iostream>
#include <vector>

using namespace std;


class Date {
	public:
	int y, m, d;
};

void init_date(Date& date)
{
	if (date.y > 0)
		date.y = date.y;
	else{
		cout<<"Error: Invalid year"<<endl;
		throw("Invalid year");
	}
	if (date.m < 13 && date.m > 0)
		date.m = date.m;
	else{
		cout<<"Error: Invalid month"<<endl;
		throw("Invalid month");
	}
	if (date.d > 0 && date.d < 32)
		date.d = date.d;
	else{
		cout<<"Error: Invalid day"<<endl;
		throw("Invalid month");
	}
	
}

void add_day(Date& date, int n)
{
	date.d += n;
	if (date.d > 31)
	{
		date.m++;
		date.d -= 31;
		if (date.m > 12)
		{
			date.y++;
			date.m -= 12;
		}
	}
}

int main()
{
	vector<string> month_in_english(12); //{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	month_in_english[1] = "January";
	month_in_english[2] = "February"; // I tryed above method but got a error so I used this method
	month_in_english[3] = "March";
	month_in_english[4] = "April";
	month_in_english[5] = "May"; 
	month_in_english[6] = "June";
	month_in_english[7] = "July";
	month_in_english[8] = "August";
	month_in_english[9] = "September";
	month_in_english[10] = "October";
	month_in_english[11] = "November";
	month_in_english[12] = "December";
	
	string month_in_string;
	Date today {1978, 6, 25};
	Date tomorrow{today.y, today.m, today.d};
	
	
	try{
		for(int i=1; i<13; i++){
			if(today.m == i-1)
				month_in_string = month_in_english[i-1];
	}
		init_date(today);
		cout << "Today's Date: " << today.y << "/" << month_in_string << "/" << today.d << "....\n"; //changed today.m to month_in_string

		for(int i=1; i<13; i++){
			if(today.m == i-1)
				month_in_string = month_in_english[i-1];
	}
	
		init_date(tomorrow);
		add_day(tomorrow, 1);
		cout << "Tomorrow's Date: " << tomorrow.y << "/" << month_in_string << "/" << tomorrow.d << "....\n";
}
		catch(exception& e){
			cout<<e.what()<<endl;
	}
		catch(...){
			cout<<"Error"<<endl;
	}
	return 0;
}
