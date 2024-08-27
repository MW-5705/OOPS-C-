#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    public:
        void getData()
        {
            cout << "Enter name of student: ";
            getline(cin, name);
            cout << "Enter age of student: ";
            cin >> age;
            cin.clear();
            cin.sync();
        }
        // void display()
        // {
        //     cout << "Name of student: " << name << endl << "Age of student: " << age << endl;
        friend class teacher;
        // }
};

class teacher
{
    string name;
    string subject;
    public:
        void getData()
        {
            cout << "Enter name of teacher: ";
            getline(cin, name);
            cout << "Enter subject of teacher: ";
            getline(cin, subject);
        }
        void display_student(student s1)
        {
            cout << "Name of student: " << s1.name << endl << "age of student: " << s1.age << endl;
        }
};

int main()
{
    student s1;
    teacher t1;
    s1.getData();
    t1.display_student(s1);
    return 0;
    
}