/*
    https://br.spoj.com/problems/PALAVRMG/
*/
#include <bits/stdc++.h>

using namespace std;

bool is_ordered(string s) {

    for(int j=1; j<s.length(); j++) {
        if(tolower(s[j]) <= tolower(s[j-1]))
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    string s;
    for (int i=0; i<n; i++) {
        cin.clear();
        cin >> s;

        if (is_ordered(s)){
            cout << s << ": O"<<endl;
        } else {
            cout << s << ": N"<<endl;
        }
    }
    return 0;
}