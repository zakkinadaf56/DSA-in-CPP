#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    int row;
    int col;
    cin >> row;
    cin >> col;
    // creating 2d dynamic array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}