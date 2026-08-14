#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos;
    cin>>n>>pos;
    int result=(n^(1<<pos-1));
    cout<<bitset<4>(result)<<'\n';
return 0;
}
//toggle: 0 become 1 &1 become 0