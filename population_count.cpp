#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
 int count=0;
  while (n!=0)
  {
   if(n&i==1){
    count++;
   }
   n=n>>1;
  }
  cout<<count<<'\n';
  
//   cout<<__builtin_popcount(n)<<'\n';
    return 0;
}