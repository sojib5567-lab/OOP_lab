#include<bits/stdc++.h>
using namespace std;
int main(){
int a=5;
int pos;
cin>>pos;
int result=(a&(~(1<<pos-1)));
cout<<bitset<4>(result)<<'\n';


    return 0;
}