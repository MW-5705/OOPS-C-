#include <iostream>
using namespace std;

class complex
{
    public:
        // real and imag are in public scope as they have to be accessed when they are passed as argument to the sum function for any object
        int real;
        int imag;
        void setComplex()
        {
            cout << "Enter real part of complex number: ";
            cin >> real;
            cout << "Enter imaginary part of complex number: ";
            cin >> imag;
        }
        void displayComplex()
        {
            cout << "The given complex number : " << real << " + " << imag <<"i" <<endl;
        }
        complex sum(complex number2)
        {
            complex temp;
            temp.real = real + number2.real;
            temp.imag = imag + number2.imag;
            return temp;
        }
};

int main()
{
    complex c1, c2, c3;
    cout << "Complex number 1: \n";
    c1.setComplex();
    c1.displayComplex();
    cout <<  "Complex number 2: \n";
    c2.setComplex();
    c2.displayComplex();
    cout << "Sum of complex number 1 and 2: \n";
    c3 = c1.sum(c2);
    c3.displayComplex();
    return 0;
}