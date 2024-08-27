#include <iostream>
using namespace std;

class test
{
    int a;
    int b;
    public :
        void getData()
        {
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
        }
        friend class sample; 
};

class sample
{
    int c;
    int d;
    public:
        void setData()
        {
            cout << "Enter c: ";
            cin >> c;
            cout << "Enter d: ";
            cin >> d;
        }
        void sum(test t1)
        {
            cout << "Sum of a and b: " << t1.a + t1.b << endl;
        } 

};

int main()
{
    test t1;
    t1.getData();
    sample s1;
    s1.sum(t1);
    return 0;
}