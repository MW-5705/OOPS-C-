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
    friend number *double_value(number *n1);
};

number *double_value(number *n1)
{
    n1->n *= 2;
    return n1;
}

int main()
{
    number n1;
    n1.setValue(15);
    number *n2;
    n2 = double_value(&n1);
    n2->display();
    return 0;
}
