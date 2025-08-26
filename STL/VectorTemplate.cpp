#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<v.capacity()<<endl;
    vector<int>a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;
    cout<<"Elemnt at index 2 = "<<v.at(2)<<endl;
    cout<<"First element = "<<v.front()<<endl;
    cout<<"Last elemnt = "<<v.back()<<endl;
    //before pop back
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    //after popback
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of elemnt "<<v.size()<<endl;
    v.clear();
    cout<<"Size of elemnt "<<v.size()<<endl;



}