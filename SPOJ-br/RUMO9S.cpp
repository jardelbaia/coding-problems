/*
    https://br.spoj.com/problems/RUMO9S/
*/
#include <bits/stdc++.h>

using namespace std;

int s_sum(string s) {
    int k=0;
    for (int i=0; i<s.length(); i++) 
            k+=s[i]-'0';
    
    return k;
}

int degree9(string s, int degree) {
    if (s=="9") {
        return degree;
    } 
    degree+=1;
    
    int sum = s_sum(s);
    stringstream ss;
    ss << sum;
    ss >> s;


    return degree9(s, degree);    
}
int main() {
    string s;
    cin >> s;

    while (s!="0") {
        int ans=0;

        if (s_sum(s)%9!=0)
            cout << s << " is not a multiple of 9." << endl;
        else if (s=="9") {
            cout << s << " is a multiple of 9 and has 9-degree 1." << endl;
        }
        else {
            ans = degree9(s, 0);
            cout << s << " is a multiple of 9 and has 9-degree " << ans << "." << endl;
        }

        cin >> s;
    }
    return 0; 
}
