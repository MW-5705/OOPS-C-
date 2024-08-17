#include <iostream>
using namespace std;

class person
{
    private:
        int age;
        string name;
    public:
         void addDetails(int age_inp, string name_inp)
        {
             age = age_inp;
             name = name_inp;
        }
        void display();
};
inline void person::display()
        {
            cout << "Name: " << name << endl<< "Age: " << age;
        }

int main()
{
    person p1;
    p1.addDetails(10, "Mehar");
    p1.display();
    // p1.age;
}
