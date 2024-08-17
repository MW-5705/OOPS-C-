#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    static int count;
    public:
        void addDetails()
        {
            cout << "Enter name: ";
            getline(cin , name);
            cout << "Enter age: ";
            cin >> age;
            cin.clear();
            cin.sync();
            count ++;
        }
        void display()
        {
            cout << "Name: " << name << endl << "Age: " << age;
        }
        static void total()
        {
            cout << "Total number of students: " << count << endl;
        }
};

int student::count;

int main()
{
    student s1, s2, s3;
    s1.addDetails();
    student::total();
    s2.addDetails();
    student::total();
    s3.addDetails();
    student::total();
    cout << "Student 1: " << endl;
    s1.display();
    cout << "Student 2: " << endl;
    s2.display();
    cout << "Student 3: " << endl;
    s3.display();

}