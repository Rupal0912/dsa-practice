 #include<iostream>
 using namespace std;
 void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }
 void change(int b[]){
b[1]=23;
 }
int main(){
    int arr[5]={1,2,3,4,5};
    display(arr);
    change(arr);
    display(arr);
}