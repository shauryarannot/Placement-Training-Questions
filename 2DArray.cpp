#include <iostream>
using namespace std;

int main()
{
    int rows = 3, cols = 4;
    int **matrix = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    int value = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = value++;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
