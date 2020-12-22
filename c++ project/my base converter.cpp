#include <string>
#include <iostream>
using std::string;
using namespace std;
int main()
{
    int a, b;
    string opreator;
    int answer;
    cout << "Enter the first entry number: ";
    cin >> a;
    cout << "Enter operator :";
    cin >> opreator;
    cout << "Enter the second number: ";
    cin >> b;
    switch (opreator)
    {
    case "+":
        answer = a + b;
        break;
    case "-":
        answer = a - b;
        break;
    case "*":
        answer = a * b;
        break;
    case "/":
        answer = a / b;
        break;
    default:
        break;
    }
    cout << a << operator<<b < "= " << answer;
    return 0;
}