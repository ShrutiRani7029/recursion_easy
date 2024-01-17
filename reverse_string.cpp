#include<bits/stdc++.h>
using namespace std;

string rev_str(string str){

//base case
if(str.size()==0)return "";
return rev_str(str.substr(1,str.size()))+str[0];///ecursion+r, cursion+er, ursion+cer, rsion+ucer, sion+rucer, ion+srucer, on+isrucer, n+oinsrucer, noisrucer
///noisrucer

}

int main(){

string s="recursion";
cout<<rev_str(s);

}

///tc: o(n), sc: o(n)
