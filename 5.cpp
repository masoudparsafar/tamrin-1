#include <iostream>
#include <random>
#include <ctime>

using namespace std; 

int main()
{
	srand(time(0));
	int dice;
	dice = rand() % 6 + 1;
	cout << dice << endl;

	while (dice == 6)
	{
		dice = rand() % 6 + 1;
		cout << dice << endl;
	}

	system("pause");
	return 0;
}