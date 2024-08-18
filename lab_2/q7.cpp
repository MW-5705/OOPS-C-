#include <iostream>
using namespace std;

namespace ns1
{
    int a = 10;
    void print()
    {
        cout << "Print function from ns1\n";
    }
}
namespace ns2
{
    int a = 20;
    void print()
    {
        cout << "Print function from ns2\n";
    }
}

int main()
{
    cout << "ns1::a : " << ns1::a << endl << "ns2::a : " << ns2::a << endl;
    ns1::print();
    ns2::print();
    return 0 ;
}