/*
	https://olimpiada.ic.unicamp.br/pratique/p1/2016/f1/tacos-bilhar/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n,x,cont=0;
	cin >> n;
	set<int> tacos;
	for (int a=0; a<n; a++) {
		cin >> x;
		if (tacos.find(x)==tacos.end()) {
			cont+=2;
			tacos.insert(x);
		} else 
				tacos.erase(x);
	}
	cout << cont << endl;
	return 0;

}

