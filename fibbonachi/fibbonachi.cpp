//Program to print Fibbonachi sequence up to user specified number

#include"fibbonachi.h"


void input()
{
	int inputNum{ 0 };

	cout << "Enter the amount of fibbonachi numbers you would like to display (1-45): ";
	cin >> inputNum;

	//check inputNum is in range of 1-45
	while ((inputNum < 1) || (inputNum > 45)) {
		cout << "Enter a number between 1 - 45.";
		cin >> inputNum;
	}
	cout << endl;
	PrintFibbonachi(inputNum);
}

void PrintFibbonachi(int limit)
{
	// long int used as number's size grow quickly
	long int prevNum = 0;			
	long int currentNum = 1;
	long int totalSoFar = 0;

	// Fibonacci calculator
	while (limit > 0)
	{
		totalSoFar = prevNum + currentNum;
		prevNum = currentNum;
		currentNum = totalSoFar;
		cout << totalSoFar << " " ;
		limit--;
	}
	
}
