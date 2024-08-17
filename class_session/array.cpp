#include <iostream>
using namespace std;

string subjects[5] = {"DSA", "OOPS", "OS", "DMS", "NLA"};
class student
{
    string name;
    int age;
    int marks[5];

public:
    void addDetails()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter marks: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks for " << subjects[i] << " : ";
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "Name of Student: " << name << endl;
        cout << "Age of Student: " << age << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks in " << subjects[i] << " : " << marks[i] << endl;
        }
    }
};

int main()
{
    student s1;
    s1.addDetails();
    s1.display();

    return 0;
}