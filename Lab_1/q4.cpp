#include <iostream>
using namespace std;

float fahrenheit(float temp_celcius);

int main()
{
    float temp;
    cout << "Enter Temperature In Degree Celcius: ";
    cin >> temp;
    float temp_fahrenheit = fahrenheit(temp);
    cout << "Corresponding Temperature In Fahrenheit : " << temp_fahrenheit <<"*F" << endl;
}

float fahrenheit(float temp_celcius)
{
    float temp = 9 * (temp_celcius / 5) + 32;
    return temp;
}