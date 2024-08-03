#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Before Swapping: \n a : "<<a<<"\n b :"<< b<< endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After Swapping: \n a : "<<a<<"\n b :"<< b<< endl;
    return 0;
}