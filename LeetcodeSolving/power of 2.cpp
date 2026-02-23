// Input: n = 1
// Output: true
// Explanation: 2 the power of 0 = 1

// Input: n = 16
// Output: true
// Explanation: 2 the power of 4 = 16
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans=1;
    bool ispower=false;
    for (int i = 0; i <= 32; i++)
    {
        if (ans==n)
        {
            ispower= true;
            break;
        }
        ans=ans*2;
    }
    if (ispower)
    {
        cout<<"power of 2";
    }
    else{
        cout << "Not a Power of 2";
    }
}