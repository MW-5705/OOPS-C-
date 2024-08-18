#include <iostream>
using namespace std;

class person
{
    string name;
    int age;
    public :
        void getData(string name_inp, int age_inp);
        void display();
};

void person::getData(string name_inp, int age_inp)
{
    name = name_inp;
    age = age_inp;
}
void person::display()
{
    cout << "Name : " << name << endl << "Age : " << age << endl;
}

int main()
{
    person p1;
    p1.getData("Mehar Walia", 19);
    p1.display();
    return 0;
}

