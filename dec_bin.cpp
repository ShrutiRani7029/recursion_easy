
///decimal to binary : 5->101, tc=o(log(n))=sc

#include<bits/stdc++.h>
using namespace std;

void dec_bin(int n){
    if(n > 0){
        dec_bin(n/2);
        cout << n % 2;
    }
}

int main(){
    int n;
    cin >> n;
    cout << "Binary form of decimal num " << n << " : ";
    dec_bin(n);
    cout << endl;

    return 0;
}
