//print 1 to n

#include<bits/stdc++.h>
using namespace std;

int rec(int n){

    if(n>0)
    {
        rec(n-1);
        cout<<n<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    int ans=rec(n);
    return 0;
}
