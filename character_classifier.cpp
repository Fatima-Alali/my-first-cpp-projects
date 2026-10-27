
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Capital Letter";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Small Letter";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "number";
    }
    else
    {
        cout << "Special character";
    }

    return 0;
}
