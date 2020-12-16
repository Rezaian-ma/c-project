//Write a recursive function that converts multiplication to addition and solution
#include <iostream>
using namespace std;
void multiply_convert_to_Sum(int a, int b);
int main()
{
	cout << "Hello World!\n";
	int a, b;
	cin >> a >> b;
	multiply_convert_to_Sum(a, b);
	cin >> a;
}
int s = 0;
void multiply_convert_to_Sum(int a, int b)
{
	if (b == 0)
	{
		cout << s;
		return;
	}
	else
	{
		s += a;
	}
	b = b - 1;
	multiply_convert_to_Sum(a, b);
}

