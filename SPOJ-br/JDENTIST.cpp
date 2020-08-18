/*
	https://br.spoj.com/problems/JDENTIST/
*/
#include <bits/stdc++.h>

using namespace std;

bool compara(pair<int,int> a, pair<int,int>b){
  return a.second<b.second;
}

int main () {

	int n,x,y;
	cin >> n;
	vector<pair<int,int>> con;

	for (int a=0; a<n; a++) {
		cin >> x >> y;
		con.push_back(make_pair(x,y));

	}
	sort(con.begin(), con.end(),compara);
	int ans=1,atual=0;
	for (int a=0; a<n; a++) {	
		
		if (a!=n-1 && con[atual].second<=con[a+1].first) {
			
			ans++;
			atual=a+1;
		}
	}
	cout << ans << endl;
	return 0;

}
