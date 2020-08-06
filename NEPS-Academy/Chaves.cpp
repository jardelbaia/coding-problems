/*
		https://neps.academy/lesson/267
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n;

	cin >> n;
	string s;
	stack<char> ch;
	bool fl = 1;
	cin >> ws;
	for (int a=0; a<n; a++) {
		getline(cin,s);
		for (int b=0; b<s.size();b++) {
			if (s[b]=='{')
				ch.push(s[b]);
			else if (s[b]=='}') {
				if (ch.empty()) 
					fl=0;
				else
					ch.pop();
			}		
		}

	}
	if (fl && ch.empty())
		cout << "S"  << endl;
	else
		cout << "N" << endl;
	
	return 0;
} 
