#include <bits/stdc++.h>

using namespace std;

long long int rec(long long int n) {
	
	if (n<=100) {
		rec(rec(n+11)); 
	}
	else 
		return n-10;
	
}
int main () {
	long long int n;

	while(cin >> n,n!=0) {
		
		long long int x = rec(n);

		cout <<"f91("<<n<<") = "<< x << endl;

	}	
	return 0;
} 
