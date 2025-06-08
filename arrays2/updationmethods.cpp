 #include<iostream>
 using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
   int *ptr=arr;  //giving address
   cout<<ptr<<endl;
   ptr[0]=12;
   ptr[1]=13;   //m 1
   for(int i=0;i<=4;i++){
    cout<<ptr[i]<<" ";
    //cout<<endl;
   }
cout<<endl;
   for(int i=0;i<=4;i++){
    cout<<*ptr<<" ";
    ptr++;   //m2
   }
    ptr=arr; 

    *ptr=12;
    ptr++;   //m3
    *ptr=13;
    ptr--;
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
}