/*
	https://br.spoj.com/problems/TROCCARD/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int a,b,x;
	while(cin >> a, cin>>b, a!=0 && b!=0) {

		set<int> al;
		set<int> be;

		for (int i=0; i<a; i++) {
			cin >> x;
			al.insert(x);
		}	

		int cont=0;
		vector<bool> del(100005);
		for (int i=0; i<b; i++) {
			cin >> x;
			if (al.find(x) == al.end())
				be.insert(x);
			else 
				if (!del[x]) {
					del[x]=1;
					cont++;
				}	
		}	

		
		cout << min(al.size()-cont,be.size()) <<endl;

	}
	return 0;

}

