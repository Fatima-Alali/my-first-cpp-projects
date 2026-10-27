
#include <iostream>
using namespace std;

int main()
{
    double fahrenheit, celsius;

    cout << "Enter temperature in celsius: ";
    cin >> celsius;

    fahrenheit=(celsius*9/5)+32;

    cout << "Temperature in fahrenheit = " << fahrenheit;

    return 0;
}
