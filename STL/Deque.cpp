#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(4);
    // for(int i: d){
    //     cout<<i<<" ";
    // }cout<<endl;
    // d.pop_back();
    // for(int i: d){
    //     cout<<i<<" ";
    // }
    cout<<"Print index ="<<d.at(1)<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"End "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"Size of Elemnt "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"Size of Elemt "<<d.size()<<endl;
    for(int i: d){
        cout<<i<<" ";
    }

}