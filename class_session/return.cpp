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
    sentence print_cat(sentence phrase2)
    {
        sentence temp;
        temp.phrase = phrase + " " + phrase2.phrase;
        return temp;
    }
};

int main()
{
    sentence s1, s2, s3;
    s1.phrase = "Hello";
    s2.phrase = "World";
    s1.print();
    s2.print();
    s3 = s1.print_cat(s2);
    s3.print();
    return 0;
}