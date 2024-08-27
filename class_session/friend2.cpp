#include <iostream>
using namespace std;

class sample;

class test
{
    int a;
    public :
        void getData()
        {
            cout << "Enter a: ";
            cin >> a;
        }
    friend void sum(test n, sample m);
};

class sample
{
    int b;
    public:
        void setData()
        {
            cout << "Enter b: ";
            cin >> b;
        }
        friend void sum(test n, sample m);
};

void sum(test n, sample m)
{
    cout << "Sum of both objects becomes: " << n.a + m.b << endl;
}

int main()
{
    test t1;
    sample s1;
    t1.getData();
    s1.setData();
    sum(t1, s1);
}