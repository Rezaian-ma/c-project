#include <stdexcept>
#include <iostream>
using namespace std;

void dec2base(int b, long x)
{
    if (x == 0)
    {
        cout << '0';
        return;
    }

    if (x < 0)
    {
        cout << '-';
        x = -x;
    }

    char buf[12];
    int i = 0;

    do {
        buf[i++] = static_cast<char>(x % b);
    } while (x /= b);

    do {
        if (buf[--i] <= 9) cout << static_cast<char>(buf[i] + '0');
        else cout << static_cast<char>(buf[i] + ('a' - 10));
    } while (i);
}

long base2dec(int b, char* p)
{
    long digit;           
    long mul = 1;        
    char* pos = p;        
    bool neg = false;     
    long ret = 0;         

    while (*pos) pos++;

    while (pos-- != p)
    {
        if (*pos < '0')
        {
            if (*pos == '-')
            {
                neg = true;
                break;
            }
            else  
            {
                throw invalid_argument("Not a number");
            }
        }
        if (*pos > 'f')
            throw invalid_argument("Not a number");

        
        if (*pos <= '9') digit = *pos - '0';
        else if (*pos >= 'a') digit = *pos - ('a' - 10);
        else if (*pos >= 'A' && *pos <= 'F')
            digit = *pos - ('A' - 10);
        else
            throw invalid_argument("Not a number");

        
        if (digit >= b)
            throw invalid_argument("Not a number");

        
        ret += digit * mul;

        
        mul *= b;
    }
    return neg ? -ret : ret;
}

int main()
{
    int d, b = 0;
    char* s = new char();
    
    cout << "please Enter the First  Base:";
    cin >> b;
    cout << "please Enter the Destination Base:";
    cin >> d;
    cout << "please Enter the number:";
    cin >> s;
    long val = base2dec(b, s);
    dec2base(d, val);
}