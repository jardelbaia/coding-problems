/*
	https://br.spoj.com/problems/OBITETRI/
*/
#include <bits/stdc++.h>

using namespace std;

bool ordena(pair< string, int > p, pair< string, int > k) {
	if(p.second!=k.second)
		return p.second > k.second;
	else 
		return p.first < k.first;

}

int main() {
	
	int a,x;
	int teste=1;
	while (cin >> a, a!=0) {
		vector< pair< string, int > > players(a);
		
		for (int i=0; i<a; i++) {
			cin >> players[i].first;
			int menor=1001, maior=-1;
			players[i].second=0;
						
			for (int j=0; j<12; j++) {
				cin >> x;
				players[i].second+=x;
				
				if (x<menor)
					menor=x;
				if (x>maior)
					maior=x;
					
			}		
			players[i].second-= (maior+menor);

		}
	
		sort(players.begin(), players.end(), ordena);
		
		cout <<"Teste "<< teste++<< endl;
		int aux=-1;
		for (int i=0, f=1; i<a; i++) {
			if (aux!=players[i].second)
				f=i+1;
			
			cout <<f<< " " << players[i].second << " " << players[i].first << endl;
			
			aux = players[i].second;
		}
		cout << endl;
		
	}
	
	
		
}
