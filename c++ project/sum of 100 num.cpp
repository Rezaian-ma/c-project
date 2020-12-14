#include <iostream>

using namespace std;
int main()
{
	long sum = 0;
	int n = 0;
	for (int i = 1; i <= 100; i++)
	{
		cin >> n;
		sum += n;
	}
	cout << sum;
	return getchar();

}