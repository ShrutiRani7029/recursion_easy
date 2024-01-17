///Recursive function to check if a string is palindrome (reverse=original)
///madam, mam: -> valid palindromes
///key, sir: -> invalid
#include<bits/stdc++.h>
using namespace std;

bool check(int l, int r, string &s) {
    if (l >= r) return true; /// base condition
    if (s[l] != s[r]) return false;
    /// recursive call:
    return check(l + 1, r - 1, s);
}

bool palindrome(string &str) {
    return check(0, str.size() - 1, str);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        if (palindrome(str))
            cout << "yes, given string is a palindrome" << endl;
        else
            cout << "no, given string is not a palindrome" << endl;
    }

    return 0;
}
///tc: o(n), sc:o(n)

