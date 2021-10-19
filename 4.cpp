#include <iostream>

using namespace std;

int main()
{
	cout << "tedad daneshjooyan ra vared konid : " << endl; 
	float count;
	cin >> count; 

	int student[100], i=0, max=0 , min=0 ;
	float sum = 0;

	cout << "nomre daneshjoo (" << i+1 << ") vared konid : ";
	cin >> student[i];
	max = student[i];
	min = student[i];
	sum = student[i];

	for (i = 1; i < count; i++)
	{
		cout << "nomre daneshjoo (" << i + 1 << ") vared konid : ";
		cin >> student[i];

		if (student[i] >= max)
		{
			max = student[i];
		}
		else if (student[i] <= min)
		{
			min = student[i];
		}

		sum += student[i];
	}
	sum = sum / count;
	cout << "max = " << max << "   min = " << min << "   average = " << sum <<endl;

	system("pause");
	return 0;
}