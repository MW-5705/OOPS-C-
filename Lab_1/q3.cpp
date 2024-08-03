#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter First Number: ";
    cin >> num1;

    int num2;
    cout << "Enter Second Number: ";
    cin >> num2;

    char operation;
    cout << "Enter which operation has to be performed: ";
    cin >> operation;
    switch (operation){
    case '+':
    {
        cout << num1 + num2;
        break;
    }
    case '-':
    {
        cout << num1 - num2;
        break;
    }
    case '*':
    {
        cout << num1 * num2;
        break;
    }
    case '/':
    {
         float answer = num1 / num2;
        return answer;
        break;
    }
    default:
        cout << "Invalid Operator: Input + - * or /" << endl;
    }
}