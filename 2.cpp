#include <iostream>

using namespace std;

int main()
{
	cout << "lotfan be tartib (hour , minute , seconds) vared konid : " << endl; 

	int hour, minute, seconds, sum; 
	cin >> hour >> minute >> seconds;

	hour = hour * 3600; 
	minute = minute * 60; 

	sum = hour + minute + seconds;
	cout <<"seconds : "<< sum << endl;


	system("pause");
	return 0; 
}