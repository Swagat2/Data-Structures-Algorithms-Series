#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("Swagat");
    q.push("Silu");
    q.push("Shreeman");
    cout<<"size of element -> "<<q.size()<<endl;

    cout<<"First element -> "<<q.front()<<endl;
    q.pop();
    cout<<"First element -> "<<q.front()<<endl;



}