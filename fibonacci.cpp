///fibonacci, (0, 1,1,2,3,5,8...), tc:o(n*2^n), sc: o(n)
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){

if(n<=1)return n;
return fibo(n-1)+fibo(n-2);

}

int main(){

int n;
cin>>n;
for(int i=0;i<n;i++){
    cout<<fibo(i)<<" ";
}

}
