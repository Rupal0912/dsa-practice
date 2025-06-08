#include<iostream>
using namespace std;
int maze(int row,int col){
    if(row<1 ||col<1) return 0;
    if(row==1 || col==1) return 1;
    int rightways=maze(row,col-1);
    int downways=maze(row-1,col);
    return rightways+downways;

}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    cout<<maze(n,m);
}
