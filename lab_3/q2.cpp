#include <iostream>
using namespace std;

class sample;

class test
{
    int a;
    public:
        void get_data(int inp)
        {
            a = inp;
        }
        void display()
        {
            cout << "a = " << a << endl;
        }
    friend void swap(test *t1, sample *s1);
};

class sample
{
    int b;
    public :
        void setData(int inp)
        {
            b = inp;
        }
        void display()
        {
            cout << "b = " << b << endl;
        }
    friend void swap(test *t1, sample *s1);

};

void swap(test *t1, sample *s1)
{
    int temp = t1->a;
    t1->a = s1->b;
    s1->b = temp;

}

int main()
{
    test t1;
    sample s1;
    t1.get_data(10);
    s1.setData(20);
    cout << "Object of test\n";
    t1.display();
    cout << "Object of sample\n";
    s1.display();
    swap(&t1, &s1);
    cout << "After Swapping\n";
    cout << "Object of test\n";
    t1.display();
    cout << "Object of sample\n";
    s1.display();
    return 0;
}