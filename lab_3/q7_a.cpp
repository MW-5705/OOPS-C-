#include <iostream>
using namespace std;

class number
{
    int a;
    friend number double_value(number n1);
    public:
        void setData(int n)
        {
            a = n;
        }
        void display()
        {
            cout << "Value: " << a << endl;
        }
};

number double_value(number n1)
{
    number n2;
    n2.a = 2*n1.a;
    return n2;
}

int main()
{
    number n1;
    n1.setData(15);
    number n2 = double_value(n1);
    n2.display();
    return 0;
}