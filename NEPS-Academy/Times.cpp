/*
		https://neps.academy/lesson/268
*/
#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b) {
	return a.first>b.first;
}
int main () {
	int n, t,k;
	string z;
	cin >> n >> t;
	pair<int, string> jog[n]; 

	for (int a=0; a<n; a++) {
		cin >> z >> k;
		jog[a] = make_pair(k,z); 
	}

	sort(jog, jog+n,comp);

	int x=0;
	for (int a=1; a<=t; a++) {
		cout << "Time "<< a<< endl;
		set<string> imprime;

		for (int b=x; b<n;b+=t) {
			imprime.insert(jog[b].second);

		}
		x++;

		while(!imprime.empty()){
			cout << *imprime.begin()<<endl;
			imprime.erase(imprime.begin());
		}
	
		cout << endl;
	}
	
	return 0;
} 
