#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Enter First Value: ";
	cin >> num1;
	cout << "Enter Second Value: ";
	cin >> num2;
	cout << "Enter Third Value: ";
	cin >> num3;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;
	if (*ptr1 > *ptr2 && *ptr1 > *ptr3)
	{
		cout << "Largest Number is: " << *ptr1 << endl;
	}
	else if (*ptr2 > *ptr1 && *ptr2 > *ptr3)
	{
		cout << "Largest Number is: " << *ptr2 << endl;
	}
	else
	{
		cout << "Largest Number is: " << *ptr3 << endl;
	}
	if (*ptr1 < *ptr2 && *ptr1 < *ptr3)
	{
		cout << "Smallest Number is: " << *ptr1 << endl;
	}
	else if (*ptr2 < *ptr1 && *ptr2 < *ptr3)
	{
		cout << "Smallest Number is: " << *ptr2 << endl;
	}
	else
	{
		cout << "Smallest Number is: " << *ptr3 << endl;
	}	
	return 0;
}