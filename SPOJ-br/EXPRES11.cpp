/*
		https://br.spoj.com/problems/EXPRES11/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n;

	cin >> n;
	string s;

	for (int a=0; a<n; a++) {
		cin >> s;
		stack<char> f;
		bool flag=1;			
		for (int b=0; b<s.size() && flag; b++) {
			if (s[b]=='(' || s[b]=='[' || s[b]=='{') 
				f.push(s[b]);
			else {
				 
				if (!f.empty() && ((f.top()=='[' && s[b]==']') || (f.top()=='(' && s[b]==')') || (f.top()=='{' && s[b]=='}')))	
					f.pop();
				else	
					flag=0;    						
			}	
		}
		if (flag && f.empty()) cout << "S" << endl;
		else cout << "N" << endl;				
	}

	return 0;
} 
