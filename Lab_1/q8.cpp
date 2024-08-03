#include <iostream>
using namespace std;

int section(int days); // created a function which takes the number of days and returns the punishment on basis of a case

int main()
{
    int days;
    cout << "Enter number of days by which you are late: ";
    cin >> days;
    int section_value = section(days);
    int fine;
    switch (section_value)
    {
    case 0:
    {
        fine = days*0.5; 
        cout << "As you delayed the book submisson by "<<days<<"days"<<"your fine is "<<fine<<"rupees";
        break;
    }
    case 1:
    {
        fine = 5 * 0.5 + (days-5)*1;
        cout << "As you delayed the book submisson by "<<days<<" days "<<"your fine is "<<fine<<" rupees ";
        break;
    }
    case 2:
    {
        fine = 5 * 0.5 + 5*1 + (days-15) * 5;
        cout << "As you delayed the book submisson by "<<days<<"days"<<"your fine is "<<fine<<"rupees";
        break;
    }
    case 3:
    {
        cout << "You returned the book 30 days after the due date, hence your membership stands cancelled\n";
    }
    }
}

int section(int days)
{
    if (days <= 5)
    {
        return 0;
    }
    else if (days <=10)
    {
        return 1;
    }
    else if (days<=30)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
