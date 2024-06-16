# include <iostream>
# include <queue>
# include <stack>



using namespace std;
int main(){
queue<int>q; 
stack<int>s; 
int k=3;

for(int i=1;i<=5;i++){
    q.push(i);
}
for(int i=0;i<k;i++){
    int ele=q.front();
    q.pop();
    s.push(ele);
}
while(! s.empty()){
    int ele=s.top();
    s.pop(); 
    q.push(ele);
}

for(int i=0;i<(q.size()-k);i++){
    int front=q.front();
    q.pop();
    q.push(front); 
    
}
 
    while(! q.empty()){
      cout<<q.front()<<" ";
      q.pop(); 
    } 
    
    return 0;

}


