#include <iostream>
using namespace std;
int main()
{
	int height, width;
	cout << "Enter Height: ";
	cin >> height;
	cout << "Enter Width: ";
	cin >> width;
	int *firstp;
	int* secondp;
	firstp = &height;
	secondp = &width;
	cout << "The total area is: " << *firstp * *secondp << endl;
	return 0;
}