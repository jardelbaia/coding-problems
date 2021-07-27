/*
    https://br.spoj.com/problems/LINGUA14/
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int flag=0;
    for (int i=0; i<s.length(); i++) {
        if (flag%2!=0) {
            cout << s[i];
        } 
        flag+=1;
        if (s[i]==' '){
            cout << s[i];
            flag=0;
        }
    }
    cout << endl;
    return 0;
}