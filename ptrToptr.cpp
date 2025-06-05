#include <iostream>
using namespace std;

int main()
{
    int var = 100;
    int *ptr = &var;
    int **ptrToPtr = &ptr;

    cout << "Value of var using pointer to pointer: " << **ptrToPtr << endl;

    return 0;
}
