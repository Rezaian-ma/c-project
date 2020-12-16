//Write a recursive function that prints the digits of a number separately on a line 
#include <iostream>
using namespace std;
void print_digit(int n);
int main()
{
    cout << "Hello World!\n";
    int n;
    cin >> n;
    print_digit(n);
    cin >> n;
}
void print_digit(int n)
{
    int k = 0;
    k = n % 10;
    cout << k<<endl;
    n = (n - k) / 10;
    if (n == 0)
    {
        return ;
    }
    else
    {
        print_digit(n);
    }
}

