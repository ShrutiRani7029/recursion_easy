#include<bits/stdc++.h>
using namespace std;

bool power_of_four(int n){

///base condition
if(n==1)return true;

if(n%4!=0 || n<=0)return false;
return power_of_four(n/4);

}


int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
if(power_of_four(n))
cout<<"true"<<endl;
else
    cout<<"false"<<endl;
    }

}
