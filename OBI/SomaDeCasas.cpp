/*
	https://olimpiada.ic.unicamp.br/pratique/p2/2012/f2/soma/
*/
#include <bits/stdc++.h>

using namespace std;

int n;
long long int k;
vector<long long int> houses;

long long int find_sum(int l,long long int sum) {
	int r = n-1;

	while (l<=r) {
		int m = (l+r)/2;

		if (houses[m]+sum==k)
			return houses[m];
		else if (houses[m]+sum < k) 
			l=m+1;
		else 
			r = m-1;
	}
	return -1;
}

int main () {


	cin >> n;
	
	for (int a=0; a<n; a++) {
		cin >>k;
		houses.push_back(k);
	}

	cin >> k;
	long long int soma=0;
	for (int a=0; a<n; a++) {
		soma+=houses[a];
		long long int p = find_sum(a+1,houses[a]) ;
		if (p!=-1) {
			cout << houses[a] << " "<<p << endl;
			break;
		}
	}		
	
	return 0;

}
