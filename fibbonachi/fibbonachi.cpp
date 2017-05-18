#include"fibbonachi.h"


void input()
{
	int inputNum{ 0 };

	cout << "Please enter the amount of fibbonachi numbers you would like to display: ";
	cin >> inputNum;
	cout << endl;

	fibbonachi(inputNum);
}

void fibbonachi(int limit)
{
	int a = 0;
	int b = 1;
	int c = 0;

	while (limit > 0)
	{
		c = a + b;
		a = b;
		b = c;
		cout << c << '\t';
		limit--;
	}
	
}