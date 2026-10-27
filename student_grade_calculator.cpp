
#include <iostream>
using namespace std;

int main()
{
    int mark;

    cout << "Enter student mark: ";
    cin >> mark;

    if (mark < 0 || mark > 100)
    {
        cout << "Error";
    }
    else if (mark>=90 && mark<=100)
    {
        cout << "Excellent";
    }
    else if (mark >=80&& mark<90)
    {
        cout << "Very Good";
    }
    else if (mark>=70 && mark<80)
    {
        cout << "Good";
    }
    else if (mark>=60 && mark<70)
    {
        cout << "Not Bad";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}
