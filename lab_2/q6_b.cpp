#include <iostream>
using namespace std;

int a = 10;

int main()
{
    int a = 20;
    cout << "Local a : " << a << endl;
    cout << "Global ::`a : " << ::a << endl;
    return 0;
}