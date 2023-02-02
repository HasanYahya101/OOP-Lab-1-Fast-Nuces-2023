#include <iostream>
using namespace std;

int main()
{
	int x = 0, y = 0;
	cout << "Enter value of X: ";
	cin >> x;
	cout << "Enter value of Y: ";
	cin >> y;
	int sum = 0;
	int difference = 0;
	int product = 0;
	int squareofx = 0;
	int squareofy = 0;
	int *firstpointer;
	int *secondpointer;
	firstpointer = &x;
	secondpointer = &y;
	cout << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Sum is: " << *firstpointer + *secondpointer << endl;
	cout << "Difference is: " << *firstpointer - *secondpointer << endl;
	cout << "Product is: " << *firstpointer * *secondpointer << endl;
	cout << "Squares are: " << *firstpointer * *firstpointer << ", " << *secondpointer * *secondpointer << endl;
	cout << "--------------------------------------------------------------" << endl;
	return 0;
}