#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="Swagat";
    m[4]="Silu";
    m[3]="Autooo";
    m.insert({8,"Shree"});
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Find -> "<<m.count(4)<<endl;
    m.erase(3);
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it =m.find(4);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}