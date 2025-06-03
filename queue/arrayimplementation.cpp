#include<iostream>
using namespace  std;
class queue{
    
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    queue(){
        size=1000001;
        arr=new int[size];
        qfront =0;
        rear=0;
    }
    bool isempty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }
    void enqeue(int val){
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=val;
            rear++;
        }
    }
    int deqeue(){
        if(qfront==rear){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront =0;
                rear=0;
            }
            return ans;
        }
    }
    int front(){
        if(qfront==rear){
            return -1;

        }
        else{
            return arr[qfront];
        }
    }
};
int main(){
    int n;
    cin>>n;
    queue q;
    cout<<"enter "<<n<<"elements: "<<endl;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q.enqeue(val);
    }
    cout<<"dequeuing elements: "<<endl;
    while(!q.isempty()){
        cout<<q.deqeue()<<" ";
    }
    cout<<endl;
}