#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int pos;
    cin>>a>>pos;
    int result=a|(1<<pos-1);
    cout<<result<<'\n';
return 0;
}