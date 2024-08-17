#include <iostream>
using namespace std;

string username = "admin";
string password = "12345";

class student
{
    string name;
    int roll_no;
    string degree;
    float CGPA;
    int initialised;
    bool login()
    {
        string username;
        string password;
        cout << "Enter username: ";
        getline(cin, username);
        cout << "Enter password: ";
        getline(cin, password);
        if (username == ::username && password == ::password)
        {
            cout << "Login successfull\n";
            return true;
        }
        cout << "Invalid Credentials\n";
        return false;
    }
    public:
        char hostel;
        void addDetails()
        {
            if(initialised == 0)
            {
                 cout << "Enter name: ";
                getline(cin , name);
                cout << "Enter roll_no: ";
                cin >> roll_no;
                cin.clear();
                cin.sync();
                cout << "Enter Degree: ";
                getline(cin , degree);
                cout << "Enter CGPA: ";
                cin >> CGPA;
                cout << "Enter Hostel: ";
                cin >> hostel;
                cin.clear();
                cin.sync();
            }
            else
            {
                cout << "Student details already added\n";
            }
        }
        void updateDetails()
        {
            if(!login())
            {
                return;
            }
            int option;
            cout << "What do you want to update: \n1.Name\n2. Roll_no.\n3.Degree\n";
            cout << "Enter option: ";
            cin >> option;
            cin.clear();
            cin.sync();
            switch(option)
            {
                case 1 :
                {
                    cout << "Enter new name: ";
                    getline(cin , name);
                    cout << "Name updated succesfully\n";
                    break;
                }
                case 2:
                {
                    cout << "Enter new roll no. : ";
                    cin >> roll_no;
                    cin.clear();
                    cin.sync();
                    cout << "Roll no. updated successfully\n";
                    break;
                }
                case 3:
                {
                    cout << "Enter new Degree: ";
                    getline(cin, degree);
                    cout << "Degree Updated succesfully\n";
                    break;
                }
                default:
                {
                    cout << "Invalid option\n";
                }
            }

        }
        void updateCGPA()
        {
            if(!login())
            {
                return;
            }
            cout << "Enter new CGPA: ";
            cin >> CGPA;
            cin.clear();
            cin.sync();
            cout << "CGPA updated succesfully" << endl; 

        }
        void updateHostel()
        {
            if(!login())
            {
                return;
            }
            cout << "Enter new hostel: ";
            cin >> hostel;
            cin.clear();
            cin.sync();
            cout << "Hostel updated succesfully" << endl; 

        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Roll_no: " << roll_no << endl;
            cout << "Degree: " << degree << endl;
            cout << "Hostel: " << hostel << endl;
            cout << "Current CGPA: " << CGPA << endl;
        }

};


int main()
{
    student s1;
    cout << "Enter Student details: \n";
    s1.addDetails();
    cout << "Student 1: \n";
    s1.display();
    s1.updateDetails();
    s1.updateCGPA();
    s1.updateHostel();
    cout << "Updated Details: \n";
    s1.display();
    return 0;
}