# include <iostream>
using namespace std;
int main(){
int gas[5] ={1,2,3,4,5};
int cost[5] ={3,4,5,1,2};
int balance=0;
int deficit=0;
int start=0;
int index=0;
 for (int i = 0; i <5; i++)
    {
       balance=balance+gas[i]-cost[i];
       if(balance<0){
        deficit=deficit+abs(balance);
        balance=0;
        start=i+1;
         index=gas[i]+1;
       }
    }
    if(deficit-balance>=0){
        
        cout<<"The index is:"<<start<<endl<<"And the value is:"<<index;
    }
    else{
        return -1;
    }
    return 0;
}



