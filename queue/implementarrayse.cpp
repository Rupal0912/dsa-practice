#include<iostream>
using namespace std;
class queue{
    public:
    int arr[5];
    int front;
    int rear;
    queue(){
        front=0;
        rear=0;
    }
    void enqeue(int val){
        if(rear==5){
            cout<<"overflow"<<endl;
            return;
        }
        arr[rear]=val;
        rear++;
    }
    void deqeue(){
        if(front==rear){
            cout<<"underflow!"<<endl;
            return;
        }
        front++;
    }
    int frontt(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    int rearr(){
        if(front==rear){
            cout<<"empty"<<endl;
            return -1;
        }
        return arr[rear-1];
    }
    void display(){
        if(front==rear){
            cout<<"empty"<<endl;
        }
        else{
        for(int i=front;i<rear;i++){
           cout<<arr[i]<<" "; 
        }
        cout<<endl;
    }
    }
};
int main(){
    int n;
    cin>>n;
    queue q;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q.enqeue(val);
    }
    q.display();
    q.deqeue();
    q.display();
    cout << "Front element: " << q.frontt() << endl;
    cout << "Rear element: " << q.rearr() << endl;

}


///disadvantages of using array implementation
//fixed size,wastage after using pop
