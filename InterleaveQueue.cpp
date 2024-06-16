# include <iostream>
# include <queue>
using namespace std;
int main(){
queue<int>q;
queue<int>newqueue;

for(int i=1;i<=6;i++){
  q.push(i);
}
int n=q.size();
for(int i=0;i<n/2;i++){
    int temp=q.front();
    q.pop();
    newqueue.push(temp);
}
while(! newqueue.empty()){
    int temp=newqueue.front();
    newqueue.pop();
    q.push(temp);
     temp=q.front();
    q.pop();
    q.push(temp);
}
while(! q.empty()){
  cout<<q.front()<<' ';
  q.pop();
} 


    return 0;
}