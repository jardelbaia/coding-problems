/*
		https://br.spoj.com/problems/SALDO/
*/
#include <bits/stdc++.h>

using namespace std;


int main () {
	int n,b=1;

	while(cin>>n, n!=0) {
		int s=0,x,y,m=0,fend=-1,fbeg=-1,beg=0;

		for (int a=0; a<n; a++) {

			cin >> x >> y;
		
			
			if (x-y+s < 0) {
				s=0;
				beg=a+1;
			} else {
				s+= x-y;
			}
			
			if (s>m || (s==m && (fend-fbeg)<(a-beg))) {
				m=s;
				fend=a;
				fbeg=beg;
			}
		}

		cout << "Teste "<<b++ << endl;
	
		if (m>0)
			cout << fbeg+1<< " "<<fend+1<<endl;
		else 
			cout << "nenhum"<<endl;
		
		cout << endl;
	}			
		
	return 0;
} 
