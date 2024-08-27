#include <iostream>
using namespace std;

class test2;

class test1
{
    int a;
    public:
        void getData()
        {
            cout << "Enter a: ";
            cin >> a;
            cin.clear();
            cin.sync();
        }
        void display()
        {
            cout << "a : " << a << endl;
        }
        friend void sum(test1 t1, test2 t2);
};

class test2
{
    int b;
    public:
        void getData()
        {
            cout << "Enter b: ";
            cin >> b;
            cin.clear();
            cin.sync();
        }
        void display()
        {
            cout << "b : " << b << endl;
        }
        friend void sum(test1 t1, test2 t2);
};

void sum(test1 t1, test2 t2)
{
    cout << "Sum of data members from both objects(or classes) becomes: " << t1.a + t2.b << endl;
}

int main()
{
    test1 t1;
    test2 t2;
    cout << "Taking input\n";
    t1.getData();
    t2.getData();
    t1.display();
    t2.display();
    sum(t1, t2);
    return 0;
}