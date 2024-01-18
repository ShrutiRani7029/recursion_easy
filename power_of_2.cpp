///Given an integer n, return true if it is a power of two. Otherwise, return false.An integer n is a power of two, if there exists an integer x such that n == 2x.
///n=1, true=2^0, n=16, true=2^4, 18=false

#include<bits/stdc++.h>
using namespace std;

bool power_of_two(int n){

///base condition
if(n==1)return true;

if(n%2!=0 || n<=0)return false;
return power_of_two(n/2);

}


int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
if(power_of_two(n))
cout<<"true"<<endl;
else
    cout<<"false"<<endl;
    }

}
