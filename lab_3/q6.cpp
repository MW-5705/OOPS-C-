#include <iostream>
using namespace std;

class number
{
    int n;
    public :
        void setValue(int n)
        {
            this->n = n;
        }
        void cube();
};

inline void number::cube()
{
    cout << "Cube of given number " << n << " equals: " << n*n*n << endl;
}

int main()
{
    number n1;
    n1.setValue(50);
    n1.cube();
    return 0;
}