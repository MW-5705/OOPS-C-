#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    public: 
        static int count;
        void getData()
        {
            cout << "Enter name of student: ";
            getline(cin, name);
            cout << "Enter age of student: ";
            cin >> age;
            cin.clear();
            cin.sync();
            count ++;
        }
        void display()
        {
            cout << "Name: " << name << endl << "Age: " << age << endl;
        }
};

int student::count;

int main()
{
    student s1, s2;
    cout << "Enter details of student 1: \n";
    s1.getData();
    s1.display();
    cout << "Student Count : " << student::count << endl;
    cout << "Enter details of student 2: \n";
    s2.getData();
    s2.display();
    cout << "Student Count : " << student::count << endl;
    return 0;
}