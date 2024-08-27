#include <iostream>
using namespace std;

class rectangle
{
    int width = 0;
    int length = 0;
    public:
        void getData()
        {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
        }
        void area()
        {
            cout << "Area of Given Rectangle: " << length*width << endl;
        }
};

int main()
{
    int n;
    cout << "Enter number of Rectangles: ";
    cin >> n;
    rectangle *array = (rectangle *) malloc(n*sizeof(rectangle));
    for (int i = 0; i < n; i++)
    {
        cout << "Enter data of rectangle " << i+1 << " : " << endl;
        array[i].getData();
    }
    cout << "Areas: \n";
    for (int i = 0; i < n ; i++)
    {
        cout << "Rectangle: " << i+1 << endl;
        array[i].area();
    }
    return 0;
}