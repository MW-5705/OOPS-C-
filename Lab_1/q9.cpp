#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    char operation;
    cout << "Enter operation: ";
    cin >> operation;

    switch(operation)
    {
        case '+':
        {
            cout << "Sum of a and b : " << a+b;
            break;
        }
        case '-':
        {
            cout << "Difference of a and b : " << a-b;
            break;
        }
        case '*':
        {
            cout << "Product of a and b : " << a*b;
            break;
        }
        case '/':
        {
            cout << "Quotient of a and b : " << a/b;
            break;
        }
        default:
        {
            cout << "Pls enter any arthimatic operation\n + or - or / or *\n";

        }
    }

}