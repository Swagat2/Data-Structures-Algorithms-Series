// 10 = 1010
// Flip bits → 0101  (5)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int m=n;
    int mask=0;
    while (m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }
    return (~n)&mask;
    
}