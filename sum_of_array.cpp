

///sum of array: tc:o(n), sc:o(n)
#include<bits/stdc++.h>
using namespace std;

int rec(int arr[], int n){

if(n<=0)return 0;
return arr[n-1]+rec(arr,n-1);

}

int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];

cout<<rec(a,n);


}
