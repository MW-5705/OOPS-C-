#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

    public: 
        void getData(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        void display()
        {
            cout << "Name: " << name << endl << "Age: " << age << endl;
        }
};

int main()
{
    Student s1;
    s1.getData("Mehar Walia", 19);
    s1.display();
    return 0;
}