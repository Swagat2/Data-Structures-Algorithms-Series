#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("swagat");
    s.push("Silu");
    s.push("Shreeman");
    cout<<"Top elemnt-> "<<s.top()<<endl;
    s.pop();
    cout<<"Top elemnt-> "<<s.top()<<endl;
    cout<<"Size of stack-> "<<s.size()<<endl;
    cout<<"stack empty or not-> "<<s.empty()<<endl;
    s.push("MY");
    cout<<"Top elemnt-> "<<s.top()<<endl;
 


    

}