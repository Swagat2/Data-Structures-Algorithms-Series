#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
    int n=a.size();
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Elemnt index "<<a.at(2)<<endl;
    cout<<"Is empty or not "<<a.empty()<<endl;
    cout<<"First Elemnt "<<a.front()<<endl;
    cout<<"last elemnt "<<a.back()<<endl;    
}



