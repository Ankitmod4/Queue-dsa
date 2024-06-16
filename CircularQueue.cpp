# include <iostream>
# include <queue>
using namespace std;
class CircularQueue{
    public:
    int *arr;
    int size;  
    int front;
    int rear;
    
   CircularQueue(){
      front=-1;
      rear=-1;
      size=10001;
      arr=new int[size];
   }
   
  int Enqueue(int element){ 
    if(rear==size-1 && front==0){
        cout<<"Queue is Full";
        return -1;
    }
    // FOR SINGLE ELEMENT 
    if(front==-1 && rear==-1){
        front=rear=0;
        

    }
    // FOR CYCLIC NATURE
    else if(rear==size-1 && front!=0){
        rear=0;
        
    }
    // NORMAL FLOW
    else{
        rear++;
       
    }
    arr[rear]=element;
    return 0;
  }
  int Dequeue(){
        // Queue is Empty
        if(front==-1){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
         
        // FOR SINGLE ELEMENT
        if(front==rear){
            front=-1;
            rear=-1;
        }

        // CYCLIC NATURE
       else if(front==size-1){
              front=0;
        }

        // NORMAL FORM 
        else{
            front++;
        }
    } 
  int Empty(){
    if(front==-1){
        return true;
    }
    else{
        return false;
    }
  }
}; 

// queue<int>q;
int main() {
    CircularQueue q1;

    q1.Enqueue(5);
    q1.Enqueue(8);
    q1.Enqueue(9); 
    q1.Enqueue(9); 
     
    
    q1.Dequeue(); 
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();
    q1.Dequeue();

cout<<q1.Empty();
    

                                                                                                                                                                                          
return 0;
}