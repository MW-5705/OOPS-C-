#include <iostream>
using namespace std;


class Rectangle
{
    int height;
    int width;
    public:
        void getData()
        {
            cout << "Enter height of the Rectangle: ";
            cin >> height;
            cout << "Enter width of the Rectangle: ";
            cin >> width;
        }
        void calculateArea()
        {
            int area = height * width;
            cout << "Area of rectangle : " << area << " units square";
        }
};

int main()
{
    Rectangle r1;
    r1.getData();
    r1.calculateArea();
    return 0;
}