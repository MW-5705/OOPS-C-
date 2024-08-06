#include <iostream>
using namespace std;

int Today = 2024;

int main()
{
    int year;
    bool condition;
    do
    {
        std::cout << "Enter the year in which you were born: ";
        cin >> year;
        condition = year > Today;
    } while (condition);
    int age = 0;
    for ( int i = year; i < Today; i++)
    {
        age+=1;
    }
    std::cout << "Your age: " << age<< endl;
    int current_age;
    std::cout << "Enter Your Age: ";
    cin >> current_age;
    int birth_year = Today;
    birth_year -= current_age;
    std::cout << "You were born in " << birth_year; 
    return 0 ;
}
//helo
    
