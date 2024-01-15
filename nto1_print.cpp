#include<bits/stdc++.h>
using namespace std;

int rec(int n){

if(n>0){
    cout<<n<<" ";
    rec(n-1);
}
}

int main(){

int n;
cin>>n;
rec(n);
}
