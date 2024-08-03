#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Lorem ipsum dolor sit amet consectetur adipisicing elit. \n Sunt mollitia voluptatem \t architecto dolore laborum sed consequatur, aliquam omnis labore placeat earum rerum nemo aut corporis!    \b\b\bImpedit earum atque animi quia recusandae officiis voluptate " << setw(10000) << "tempore totam quisquam officia a sunt voluptatum perferendis nostrum iste sint beatae laboriosam, tenetur harum corporis placeat." << endl;
    // \b is used for adding backspace, setw(value) is used to specify the output next present consequently, if that many chars not present then paddng will be added
}