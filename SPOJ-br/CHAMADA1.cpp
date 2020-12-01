/*
		https://br.spoj.com/problems/CHAMADA1/
*/
#include <bits/stdc++.h>

using namespace std;

int main() {

	int a,b;
	
	cin >> a >> b;
	
	vector<string> winners(a);
	
	for (int i=0; i<a; i++) {	
		cin >> winners[i];
	}
	
	sort(winners.begin(), winners.end());
	
	cout << winners[b-1] << endl;
	return 0;
}
