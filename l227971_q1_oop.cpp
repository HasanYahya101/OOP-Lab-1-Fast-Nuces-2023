#include <iostream>
using namespace std;

int main()
{
	int data[3][5];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "Enter the number of bananas eaten by monkey " << i + 1 << " on day " << j + 1 << ": ";
			cin >> data[i][j];
			
			while (data[i][j] < 0)
			{
				cout << "Invalid input. Enter a positive number: ";
				cin >> data[i][j];
			}
		}
	}
	cout << "--------------------------------------------------------------------------" << endl;
	int* ptr = &data[0][0];
	int* ptr2 = &data[1][0];
	int* ptr3 = &data[2][0];
	double average = 0.0;
	for (int i = 0; i < 5; i++)
	{
		average = (*ptr + *ptr2 + *ptr3) / 3.0;
		cout << "The average amount of food eaten by all 3 monkeys on day " << i + 1 << " is: " << average << endl;
		ptr++;
		ptr2++;
		ptr3++;
	}	
	cout << "----------------------------------------------------------------------------" << endl;
	int* ptr4 = &data[0][0];
	double least = *ptr4;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (least > *ptr4)
			{
				least = *ptr4;
			}
			ptr4++;
		}
	}
	cout << "The least amount of food eaten by any monkey in a week is: " << least << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	int* ptr5 = &data[0][0];
	double highest = *ptr5;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (highest < *ptr5)
			{
				highest = *ptr5;
			}
			ptr5++;
		}
	}
	cout << "The highest amount of food eaten by any monkey in a week is: " << highest << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	return 0;
}