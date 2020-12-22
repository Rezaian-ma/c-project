#include <string>
#include <iostream>
#include <math.h>
#include <cmath>
using std::string;
using namespace std;
int fact(int n);
int main()
{
    double a, b;
    string temp;
    int op;
    cout << "ُSelect your opration : ";
    cout << "0:+" << endl;
    cout << "1:-"<<endl;
    cout << "2:*" << endl;
    cout << "3:/" << endl;
    cout << "4:Pow" << endl;
    cout << "5:root" << endl;
    cout << "6:sin" << endl;
    cout << "7:cos" << endl;
    cout << "8:tan" << endl;
    cout << "9:ln" << endl;
    cout << "10:arcsin" << endl;
    cout << "11:arccos" << endl;
    cout << "12:arctan" << endl;
    cout << "13:factoril" << endl;
    cin >> op;
    int answer;
    switch (op) {
    case 0:
        cout << "Enter the first entry number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << a+b;
        break;
    case 1:
        cout << "Enter the first entry number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << a-b;
        break;
    case 2:
        cout << "Enter the first entry number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << a*b;
        break;
    case 3:
        cout << "Enter the first entry number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << a/b;
        break;

    case 4:
        cout << "Enter the base number: ";
        cin >> a;
        cout << "Enter the pow number: ";
        cin >> b;
        cout << powf(a,b);
        break;

    case 5:
        cout << "Enter the number: ";
        cin >> a;
        cout << sqrtf(a);
        break;

    case 6:
        cout << "Enter the number: ";
        cin >> a;
        cout << sinf(a);
        break;

    case 7:
        cout << "Enter the number: ";
        cin >> a;
        cout << cosf(a);
        break;

    case 8:
        cout << "Enter the number: ";
        cin >> a;
        cout << tanf(a);
        break;

    case 9:
        cout << "Enter the number: ";
        cin >> a;
        cout << logf(a);
        break;
    case 10:
        cout << "Enter the number: ";
        cin >> a;
        cout << asinf(a);
        break;
    case 11:
        cout << "Enter the number: ";
        cin >> a;
        cout << acosf(a);
        break;
    case 12:
        cout << "Enter the number: ";
        cin >> a;
        cout << atanf(a);
        break;
    case 13:
        cout << "Enter the number: ";
        cin >> a;
        cout << fact(a);
        break;
    default:
        cout << "Command not recognized!\n";
        break;
    }
    return 0;
}
int fact(int n) {
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}