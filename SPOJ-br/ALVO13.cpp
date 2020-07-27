/*
		https://br.spoj.com/problems/ALVO13/
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int c,t,x,y;

	cin >> c >> t;

	vector <long long int> cir(c);

	for (long long int a=0; a<c; a++) {
		cin >> cir[a];
		cir[a] = cir[a]*cir[a];	
	}
	long long int ans = 0;
	for (long long int a=0; a<t; a++) {
		cin >> x >> y;

		long long int d = x*x + y*y;
		long long int i = 0, f = c-1;


		while (i<=f) {
			long long int m= (i+f)/2;
			
			if (cir[m] == d) {
					ans += c-m;
					break;
			} 

			else if (cir[m] > d) 
				f= m-1;	
			
			else
				i=m+1;
		}
		if (i>f && i<c)
			ans+= c-i;
		
	}	
	cout << ans << endl;
	
	return 0;
} 

