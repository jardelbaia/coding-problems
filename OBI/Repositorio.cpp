/*
	https://olimpiada.ic.unicamp.br/pratique/p2/2007/f1/repos/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int c,n;
	cin >> c >> n;

	map<long long int, long long int> apps;
	long long int p,k;
	for (int a=0; a<c; a++) {
		cin >> p >> k;
		apps.insert(make_pair(p,k));
	}
	set<long long int> install;
	for (int a=0; a<n; a++) {
		cin >> p >> k;
		if (apps.find(p) != apps.end()) {
			if (apps[p]<k) {
				apps[p]=k;
				install.insert(p);
			}
		} else {
			apps.insert(make_pair(p,k));
			install.insert(p);
		}
	}

	for (set<long long int>::iterator it=install.begin(); it!= install.end(); ++it) {
		cout << *it <<" "<< apps[*it]<< endl;
	}
	return 0;

}

