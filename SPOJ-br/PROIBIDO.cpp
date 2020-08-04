/*
		https://br.spoj.com/problems/PROIBIDO/
*/
#include <bits/stdc++.h>

using namespace std;


int main () {
	int n,x;

	cin >> n;
	vector<int> k(n);
	for (long long int a=0; a<n; a++) {
		cin >> k[a];
	}
	sort(k.begin(),k.end());
	while (cin>>x) {
		
		int inicio = 0, fim=n-1;		

		while (inicio<=fim) {
			int meio = (inicio+fim)/2;
			if (k[meio] == x) {
				cout << "sim" << endl;
				break;
			}
			else if (k[meio] >x) fim = meio-1;
			else inicio = meio+1;
		}
		if (inicio>fim) cout << "nao" << endl;
	}
	return 0;
} 
