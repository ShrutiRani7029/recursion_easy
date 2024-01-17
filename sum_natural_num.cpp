///find sum of first n natural numbers, tc=o(n), sc(o(n)
#include<bits/stdc++.h>
using namespace std;
int rec(int n){

if(n<=1)return n;
return n+rec(n-1);


}

int main(){
int n;
cin>>n;

cout<<rec(n);
}

