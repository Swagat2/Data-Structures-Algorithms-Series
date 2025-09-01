#include <iostream>
using namespace std;
void Rotate(int arr[3][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], (arr[j][i]));
        }
    }
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}
void print(int arr[3][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int arr[3][3];
    cout << "Enter elements of 3x3 matrix " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is: " << endl;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    print(arr, 3);
    Rotate(arr, 3);
    print(arr, 3);
}