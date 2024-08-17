#include<iostream>
using namespace std;

int a = 10;
int main()
{
    int a = 20;
    cout << a << endl;
    cout << ::a << endl;
}