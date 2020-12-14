#include <iostream>
using namespace std;
static int matricsmultiply()
{
	int r1 = 0, r2, c1 = 0, c2;
	cout << "This progam is for multiplation of tow Matrics";
	cout << "Please input the row number of matrics one :";
	cin >> r1;
	cout << "Please input the row number of matrics two :";
	cin >> r2;
	cout << "Please input the column number of matrics one :";
	cin >> c1;
	cout << "Please input the column number of matrics two :";
	cin >> c2;
	int* A = new int[r1, c1];
	int* B = new int[r2, c2];
	int* multi = new int[c1, r2];

	if (c1 == r2)
	{
		cout << "please input the matrise one data" << endl;
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			{
				cout << "A[" << i << "," << j << "]: ";
				cin >> A[i, j];
			}
		}
		cout << "please input the matrise two data" << endl;
		for (int i = 0; i < r2; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				cout << "A[" << i << "," << j << "]: ";
				cin >> B[i, j];
			}
		}
		//multiply
		for (int i = 0; i < r1; ++i)
		{
			for (int j = 0; j < c2; ++j)
			{
				int s = 0;
				for (int k = 0; k < c1; ++k)
				{
					s += A[i, k] * B[k, j];
				}
				multi[i, j] = s;
			}
		}
		cout << endl << "Output Matrix: " << endl;
		for (int i = 0; i < r1; ++i)
		{
			for (int j = 0; j < c2; ++j)
			{
				cout << " " << multi[i, j];
				if (j == c2 - 1)
					cout << endl;
			}
		}
	}
	else
	{
		cout << "we cannot multiply this two matricses";
	}
	return 0;
}


