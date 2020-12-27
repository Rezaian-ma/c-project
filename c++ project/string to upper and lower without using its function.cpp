#include <iostream> 

void lowercase(char* s);
void uppercase(char* s);
using namespace std;
int main()
{
    char str[100];

    cout << "Enter your string: " << endl;
    cin >> str;

    lowercase(str);
    cout << "Lowercase: " << str << endl;

    uppercase(str);
    cout << "Uppercase: " << str << endl;

    return 0;
}

void lowercase(char* s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        ++i;
    }
}

void uppercase(char* s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        ++i;
    }
}