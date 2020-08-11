/*
	https://br.spoj.com/problems/FREQUE12/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n;

	cin >> n;
	set<int> p;
	int x;	
	for (int a=0; a<n; a++) {
		cin >> x;
		p.insert(x);
	}
	cout << p.size() << endl;
	return 0;
} 
