#include <iostream>
using namespace std;

void delta(int a, int b, int c);
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	delta(a, b, c);
	return 0;
}
void delta(int a, int b, int c)
{
	double x1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2*a);
	double x2= (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
	cout << x1 <<endl<< x2;
}


