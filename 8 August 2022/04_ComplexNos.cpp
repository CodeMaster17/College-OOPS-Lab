#include <iostream>
using namespace std;

class complexNos
{
public:
    int real;
    int complex;
};
int main()
{
    complexNos complexObj;
    //  for taking input
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the real part:"
             << "\n";
        cin >> complexObj.real;
        cout << "Enter the complex part:"
             << "\n";
        cin >> complexObj.complex;
        cout << "The number in correct format is: \n";
        cout << complexObj.real << "+ i" << complexObj.complex << "\n";
        cout << "enter the next number";
    }
}