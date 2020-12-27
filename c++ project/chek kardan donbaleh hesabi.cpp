#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main()
{
    int n1 = 0;
    int n2 = 0;
    int d = 0;
    int j = 0;
    cin >> n1;
    cin >> n2;
    d = n2 - n1;
    for (int i = 0; i < 98; i++)
    {
        j = i;
        n1 = n2;
        cin >> n2;
        if (d != (n2 - n1))
        {
            cout << "donbaleh hesabi tashkil nemidan" << endl;
            break;
        }

    }
    if (j == 97)
    {
        cout << "donbaleh hesabi tashkil midan" << endl;
    }
    system("PAUSE");
    return 0;
}