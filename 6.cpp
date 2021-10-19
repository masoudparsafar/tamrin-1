#include <iostream>

using namespace std; 

int main()
{
	int n;
	cout << "yek adad vared konid = " << endl; 
	cin >> n;

	int i=1, j=0, x, temp;

	cout << "( 1 ";
	for (x = 2; x <= n; x++)
	{
		temp = i;
		i = i + j; 
		j = temp; 

		cout << i << " ";
	}
	cout << ")" << endl;

	system("pause");
	return 0;
}