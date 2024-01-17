//5!=5*4*3*2*1=120, 0!=1, 1!=1
#include<bits/stdc++.h>
using namespace std;

int fact(int n){

if(n==0 || n==1)return 1;
return n*fact(n-1);
}


int main(){
int n;
cin>>n;
cout<<fact(n);

}
