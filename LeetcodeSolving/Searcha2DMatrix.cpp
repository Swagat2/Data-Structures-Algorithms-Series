#include<iostream>
using namespace std;
int searchMatrix(int arr[3][3],int row,int col,int target){
    int start=0;
    int end=row*col-1;
    
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        int element=arr[mid/col][mid%col];
        if (element==target)
        {
            return 1;
        }
        if (element<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
    
}

int main() {
    int arr[3][3];
    cout << "Enter elements of 3x3 matrix "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is: "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cout<<"Enter the target :";
    cin>>target;
    cout<<endl;

    if (searchMatrix(arr, 3, 3, target)) {
        cout << "Target found in matrix." << endl;
    } else {
        cout << "Target not found in matrix." << endl;
    }
    return 0;
}
