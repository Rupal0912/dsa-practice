#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
     q.push(70);
      q.push(80);
  q.push(40);
    cout<<"size: "<<q.size()<<endl;
   cout<<q.front();
    // //cout<<q.pop();
    //cout<<q.pop();
    // cout<<q.front();
}