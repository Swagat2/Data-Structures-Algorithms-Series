#include<iostream>
using namespace std;
int squareroot(int n){
    int s=0;
    int e=n;
    int ans=-1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        long long square= 1LL * mid * mid;
        if (square==n)
        {
            return mid;
        }
        if (n>square)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;    
}
double moreprecision(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int temp=squareroot(n);
    cout<<"Answer is "<<moreprecision(n,5,temp);
}