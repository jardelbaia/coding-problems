/*
	https://br.spoj.com/problems/CARTEI14/
*/

#include <bits/stdc++.h>

using namespace std;

int main () {

	long long int n,m,x;
	cin >> n >> m;
	
	vector<long long int> h(n);
	
	for (long long int a=0; a<n; a++) 
		cin >> h[a];

	long long int ans=0,id=0;
	for (long long int a=0; a<m; a++) {
		cin >> x;
		
		long long int left = 0, right=n-1;
		while (left<=right) {
			long long int m = (left+right)/2;
			
			if (h[m] == x) {	
				ans+= abs(id-m);
				id = m;
				break;	
			}
			else if (h[m] > x) 
				right=m-1;		
			else
				left= m+1;
		}

	}
	cout << ans << endl;
	return 0;
} 


