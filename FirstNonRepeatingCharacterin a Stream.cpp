#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="ababc";
   queue<int>q;
int freq[26]={0};
for(int i=0;i<s.length();i++){ 
    char ch=s[i]; 
    freq[ch-'a']++;
    q.push(ch);
while(!q.empty()){
    char frontChar=q.front();
    if(freq[frontChar -'a']>1){
        q.pop();
    }
    else{
        cout<<frontChar<<' ';
        break;
    }
}
if(q.empty()){ 
    cout<<"# "; 
}
}
    return 0;
}