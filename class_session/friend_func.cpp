#include <iostream>
using namespace std;

class test
{
    int a, b;
    public:
        void getData()
        {
            cout << "Enter value of a: ";
            cin >> a;
            cout << "Enter value of b: ";
            cin >> b;
        }
        friend void sum(test n);
};

void sum(test n)
{
    cout << "Sum of a and b : " << n.a + n.b << endl;
}

int main()
{
    test t1;
    t1.getData();
    sum(t1);
    return 0;
}