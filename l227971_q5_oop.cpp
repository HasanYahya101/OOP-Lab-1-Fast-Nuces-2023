#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter value of A: ";
	cin >> a;
	cout << "Enter value of B: ";
	cin >> b;
	cout << "Enter value of C: ";
	cin >> c;
	int* p1 = &a;
	int* p2 = &b;
	int* p3 = &c;
	float mean = (*p1 + *p2 + *p3) / 3.0;
	cout << "Mean/Average of above three numbers is: " << mean << endl;
	return 0;
}