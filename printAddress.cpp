#include <iostream>
using namespace std;

int main()
{
    int var = 42;
    int *ptr = &var;

    cout << "Value of variable: " << *ptr << endl;
    cout << "Address of variable: " << ptr << endl;

    return 0;
}
