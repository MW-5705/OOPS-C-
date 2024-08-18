#include <iostream>
using namespace std;

string username = "admin";
string password = "admin";

// login is a private member function, which check whether a person has authority for updating details or no and is being called under the public function update details

class person
{
    string name;
    int age;
    bool login()
    {
        string username;
        string password;
        cout << "Enter username: ";
        getline(cin, username);
        cout << "Enter password: ";
        getline(cin, password);
        if(password == ::password && username == ::username)
        {
            cout << "Login Successfull";
            return true;
        }
        cout << "Invalid Credentials";
        return false;
        
    }
    public:
        void addDetails()
        {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter age: ";
            cin >> age;
            cin.clear();
            cin.sync();
        }
        void display()
        {
            cout << "Name: " << name << endl << "Age: " << age << endl;

        }
        void updateDetails()
        {
            if (!login())
            {
                return;
            }
            int option;
            cout << "Choose what do you want to update: \n1.Name\n2.Age\nEnter option: ";
            cin >> option;
            cin.clear();
            cin.sync();
            switch(option)
            {
                case 1:
                {
                    cout << "Enter new name: ";
                    getline(cin , name);
                    cout << "Name updated succesfully\n";
                    break;
                }
                case 2:
                {
                    cout << "Enter new age: ";
                    cin >> age;
                    cin.clear();
                    cin.sync();
                    cout << "Age updated succesfully\n";
                    break;
                }
                default : 
                {
                    cout << "Invalid option\n";
                }
            }
        }
};

int main()
{
    person p1;
    p1.addDetails();
    p1.display();
    p1.updateDetails();
    p1.display();
    return 0;
}