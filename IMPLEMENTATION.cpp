# include <iostream>
# include <queue>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front=0;
    int rear=0;
    
    Queue(){
        size=4;
        arr=new int[size];
    }

bool enqueue(int data){
//    FOR QUEUE FULL
  if(rear==size-1){
    cout<<"Queue is Full"<<endl;
    return false;
  }
// FOR PUSH IN QUEUE
else if(front==-1&& rear==-1){
    front=0;
    rear=0;
    arr[rear]=data;
}
 else{
     
    rear++;
    arr[rear]=data;
    return true;
 }
}
bool dequeue(){
// FOR EMPTY QUEUE 
if(front==-1 && rear==-1){
    cout<<"Queue is Empty"<<endl;
    return false;
}
else if(front==rear){
    arr[front]=-1;
    front=-1;
    rear=-1;
}
else{
    // arr[front]=-1; 
     front++;
    
}
}
int Empty(){ 
    // FOR EMPTY
if(front==rear){
    return true;
}
else{ 
    return false;
}
}
};


int main(){ 
queue<int>m;
Queue q;
q.enqueue(5);

q.enqueue(6); 
q.enqueue(7);
// q.enqueue(7);



q.dequeue();
q.dequeue();
q.dequeue();
q.dequeue();




cout<<q.Empty(); 
    return 0;
}

