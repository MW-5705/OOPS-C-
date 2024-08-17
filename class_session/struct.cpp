#include <iostream>
using namespace std;

struct person
{
    int age;
    string name;
    void setDetails(int age_inp, string name_inp)
    {
        age = age_inp;
        name = name_inp;
    }
    void display()
    {
        cout << "Name: "<<name<<endl<<"Age: "<<age;
    }
};

int main()
{
    person p1;
    p1.setDetails(19, "Mehar Walia");
    p1.display();
    return 0;
}
