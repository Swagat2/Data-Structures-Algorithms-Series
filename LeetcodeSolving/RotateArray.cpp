// input {1, 2, 3, 4, 5, 6, 7}
// output  {5 6 7 1 2 3 4}
#include <iostream>
#include <cmath>
using namespace std;
void Rotate(int arr[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    Rotate(arr, n, k);
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
}
