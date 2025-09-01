#include <iostream>
#include<vector>
using namespace std;

void spiralOrder(int arr[3][3], int row, int col) {
    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    cout << "Spiral Order: ";
    while (count < total) {
        // Print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++) {
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;

        // Print ending column
        for (int index = startingRow; count < total && index <= endingRow; index++) {
            cout << arr[index][endingCol] << " ";
            count++;
        }
        endingCol--;

        // Print ending row
        for (int index = endingCol; count < total && index >= startingCol; index--) {
            cout << arr[endingRow][index] << " ";
            count++;
        }
        endingRow--;

        // Print starting column
        for (int index = endingRow; count < total && index >= startingRow; index--) {
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
    cout << endl;
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

    spiralOrder(arr, 3, 3);
    return 0;
}
