#include <iostream>

using namespace std;

int main()
{
	cout << "sanie ra vared konid : " << endl;
	int hour, minute, sum;

	cin >> sum; 

	hour = sum / 3600;
	sum = sum % 3600;

	minute = sum / 60;
	sum = sum % 60;

	cout << "hour = " << hour << "  minute = " << minute << "  seconds = " << sum << endl;

	system("pause");
	return 0;
}