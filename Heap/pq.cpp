#include<iostream>
using namespace std;
class heap{
    int * arr;
    int size;
    int ts;
    public:
    heap(int n){
        arr=new int[n];
        size=0;
        ts=n;
    }
    void insert(int value){
        //if heap size is available or not

        if(size==ts){
            cout<<"overflow h yr";
            return;
        }

        arr[size]=value;
        int idx=size;
        size++;

        //compare with parent
        while(idx>0 && arr[(idx-1)/2]<arr[idx]){
            swap(arr[idx],arr[(idx-1)/2]);
            idx=(idx-1)/2;
        }
        cout<<arr[idx]<<" is inserted: ";
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    heap h(6);
    h.insert(2);

    h.insert(20);
    h.insert(12);
    h.insert(42);
    h.insert(82);
    h.print();
}