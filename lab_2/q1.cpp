#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int roll_no;
    string degree;
    char hostel;
    float cgpa;

    void addDetails()
    {
        cout << "Enter name of student: ";
        getline(cin, name); 
        cout << "Enter degree of student: ";
        getline(cin, degree);
        cout << "Enter roll no. of student: ";
        cin >> roll_no;
        cout << "Enter hostel initial of student: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }
    void updateDetails()
    {
        int option;
        cout << "1. Name \n2. Degree\n3. Roll number\n";
        cout << "Enter which detail you want to update: ";
        cin >> option;
        switch (option)
        {
            case 1:
            {
                cout << "Enter New Name: ";
                cin >> name;
                cout << "Name updated successfully\n";

                break;
            }
            case 2:
            {
                cout << "Enter New Degree: ";
                cin >> degree;
                cout << "Degree for " << name << " updated successfully\n";

                break;
            }
            case 3:
            {
                cout << "Enter New Roll Number: ";
                cin >> roll_no;
                cout << "Roll Number for " << name << " updated successfully\n";

                break;
            }
            default:
            {
                cout << "Invalid Option";
            }
        }
    }

    void updateCGPA()
    {
        cout << "Enter New CGPA: ";
        cin >> cgpa;
        cout << "CGPA for " << name << " updated successfully\n";
    }
    void updateHostel()
    {
        cout << "Enter New Hostel Initial: ";
        cin >> hostel;
        cout << "Hostel for " << name << " updated successfully\n";

    }
    void displayDetails()
    {
        cout << "Name: "<< name<< endl;
        cout << "Roll Number: "<< roll_no<< endl;
        cout << "Degree: "<< degree<< endl;
        cout << "CGPA: "<< cgpa<< endl;
        cout << "Hostel: "<< hostel<< endl;
    }
};

int main()
{
    Student s1;
    s1.addDetails();
    s1.displayDetails();
    s1.updateCGPA();
    s1.updateDetails();
    s1.updateHostel();
    s1.displayDetails();
}