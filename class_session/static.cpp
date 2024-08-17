#include <iostream>
using namespace std;


class student
{
    string name;
    int age;
    public:
    static int count;
        student()
        {
            count ++;
        }
        void addDetails()
        {
            cout << "Enter name of student: ";
            getline(cin, name);
            cout << "Enter age of student: ";
            cin >> age;
            cin.clear();
            cin.sync();
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Student Count: " << count << endl; 
        }
};

int student::count;

int main()
{
    student s1, s2, s3;
    s1.addDetails();
    s2.addDetails();
    s3.addDetails();

    cout << "Student 1: " << endl;
    s1.display();
    cout << "Student 2: " << endl;
    s2.display();
    cout << "Student 3: " << endl;
    s3.display();
    cout << student::count;
    return 0;
}