#include <iostream>
using namespace std;

void even_odd_conditional(int a);
void even_odd_if_else(int a);

int main()
{
    int a;
    cout << "Enter a: ";
    cin >> a;
    even_odd_conditional(a);
    even_odd_if_else(a);
}
void even_odd_conditional(int a)
{
    (a % 2 == 0) ? (cout << "Even !!\n") : (cout << "Odd!!\n");
}
void even_odd_if_else(int a)
{
    if (a%2 == 0)
    {
        cout << "Even!!\n";
    }
    else
    {
        cout << "Odd!!\n";
    }
}
