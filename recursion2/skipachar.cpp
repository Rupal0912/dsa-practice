#include<iostream>
using namespace std;
// void removechar(string ans,string original){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=original[0];
//     if(ch=='a') removechar(ans,original.substr(1));
//     else removechar(ans+ch,original.substr(1));
// }
// int main(){
//     string s;
//     getline(cin,s);
//     removechar("",s);
// }
void removechar(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removechar(ans,original,idx+1);
    else removechar(ans+ch,original,idx+1);
}
int main(){
    string s;
    getline(cin,s);
    removechar("",s,0);
}