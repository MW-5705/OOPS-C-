#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    public:
        void getData()
        {
            cout << "Enter Name: ";
            getline(cin , name);
            cout << "Enter Age: ";
            cin >> age;
            cin.clear();
            cin.sync();
        }
        void display()
        {
            cout << "Name: " << name << endl << "Age: " << age << endl;
        }
};

int main()
{
    Student s1;
    Student *ptr;
    ptr = &s1;
    cout << "Using dot and dereference operator\n";
    (*ptr).getData();
    (*ptr).display();
    cout << "Using arrow operator\n";
    ptr->getData();
    ptr->display();

    return 0;
}