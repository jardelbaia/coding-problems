/*
	https://br.spoj.com/problems/JASPION/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {

	int t,m,n;
	cin >> t;	
	
	while(t--) {
		map<string,string> trads;	
		cin >> m >> n;
		string s,z;
		for (int a=0; a<m; a++) {
			cin >> ws;
			getline(cin,s);
			getline(cin,z);
			trads.insert(make_pair(s,z));
		}
;
		for (int a=0; a<n; a++) {
			stringstream pals;
			getline(cin,s);
			pals<<s;
			while(pals>>z) {
				if (trads.find(z)!=trads.end()) 
					cout << trads[z] << " ";
				else 
					cout << z << " ";
			}			
			cout << endl;
		}

		cout << endl;
	}
	return 0;

}

