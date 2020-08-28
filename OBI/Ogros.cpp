/*
	https://olimpiada.ic.unicamp.br/pratique/p2/2008/f1/ogros/
*/
#include <bits/stdc++.h>

using namespace std;
int n,m;
vector<long long int> f,p;
long long int score(long long int og,int l,int r) {

	while(l<=r) {
			int m = (l+r)/2;
			if (f[m] == og) 
				return p[m+1];
			else if (f[m] > og) {
				if (m==0 || f[m-1]<=og) 
					return p[m];
				r = m-1;
			}
			else {
				if (m==n-2 || f[m+1]>og) 
					return p[m+1];		
				l = m+1;	
			}	
	}

}
int main () {

	long long int x;
	cin >> n >> m;

	for (int a=0; a<n-1; a++) {
		cin >> x;
		f.push_back(x);
	}
	
	for (int a=0; a<n; a++) {
		cin >> x;
		p.push_back(x);
	}
	long long int og;
	for (int a=0; a<m; a++) {
		cin >> og;
		cout << score(og,0,n-1)<< " ";
			
	}
	cout << endl;
	return 0;

}
