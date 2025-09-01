#include<iostream>
using namespace std;
int searchMatrix(int arr[5][5],int row,int col,int target){
    int rowIndex=0;
    int colIndex=col-1;
    while (rowIndex<row && colIndex>=0)
    {
        int element=arr[rowIndex][colIndex];
        if (element=target)
        {
            return 1;
        }
        if (element<target)
        {
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    
    return 0;
}
int main() {
    int arr[5][5];
    cout << "Enter elements of 5x5 matrix "<<endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix is: "<<endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout<<"Enter the target :";
    cin>>target;
    cout<<endl;

    if (searchMatrix(arr, 5, 5, target)) {
        cout << "Target found in matrix." << endl;
    } else {
        cout << "Target not found in matrix." << endl;
    }
    return 0;
}