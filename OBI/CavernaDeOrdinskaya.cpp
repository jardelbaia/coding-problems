/*
	https://olimpiada.ic.unicamp.br/pratique/pj/2016/f2/caverna/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {

	int n,m;
	long long  sum=0,mergAtual=-1;

	cin >> n >> m;
	long long x;
	for (int a=0; a<n; a++) {
		cin >> x;


		long long menor = min(x, abs(x-m));
		long long maior = max(x, abs(x-m));

		if (mergAtual <= menor) {
			sum+=menor;
			mergAtual = menor;
		} else if (mergAtual <= maior) {
			sum+=maior;
			mergAtual = maior;
		} else {
			sum=-1;	
			break;
		}
	}

	cout << sum << endl;
	return 0;

}
