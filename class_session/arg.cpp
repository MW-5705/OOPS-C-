#include <iostream>
using namespace std;

class sentence
{
    public:
    string phrase;
    void print()
    {
        cout << phrase << endl;
    }
    void print_cat(sentence phrase2)
    {
        cout << phrase << " " << phrase2.phrase << endl;
    }
};

int main()
{
    sentence s1, s2;
    s1.phrase = "Hello";
    s2.phrase = "World";
    s1.print();
    s2.print();
    s1.print_cat(s2);
    return 0;
}