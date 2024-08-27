#include <iostream>
using namespace std;

class number
{
    int n;
    public: 
        void setValue(int inp)
        {
            n = inp;
        }
        void display()
        {
            cout << "Value: " << n << endl;
        }
    friend void double_value(number *n1);
};

void double_value(number *n1)
{
    n1->n *= 2;
    return;
}

int main()
{
    number n1;
    n1.setValue(15);
    double_value(&n1);
    n1.display();
    return 0;
}
