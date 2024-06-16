// 1 APPROACH USING STACK

// # include <iostream>
// # include <queue>
// # include <stack>
// using namespace std;
// int main(){
// queue<int>q;
// stack<int>s;
// q.push(0);
// q.push(1);
// q.push(2);
// q.push(3);
// q.push(4);
// while(!q.empty()){
//  int ele=q.front();
//  s.push(ele);
//  q.pop();
// }
// while(!s.empty()){
//     int ele=s.top();
//     q.push(ele);
//     s.pop();
    
// }
// while(! q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
// }
//     return 0;
// }

// // 2 APPROACH USING RECURSSION
# include <iostream>
# include <queue>

using namespace std;
void  Reverse(queue<int>&q){
    // BASE CASE
    if(q.empty()){
        return ;  
    }
    int ele=q.front();
    q.pop(); 
   Reverse(q); 
   q.push(ele);
}
int main(){ 
queue<int>q;
for(int i=0;i<5;i++){
    q.push(i);
} 
Reverse(q);
 while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
     
    return 0;
}
