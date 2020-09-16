/*
	https://br.spoj.com/problems/IREVIR/
*/
#include <bits/stdc++.h> 

using namespace std; 

#define MAXN 2001


int n,m;
vector<int> r1[MAXN],r2[MAXN]; 
bool visited1[MAXN], visited2[MAXN]; 
int cont,cont2;
  

void dfs1(int k) { 
		cont++;
    visited1[k] = true; 
  	for (auto i : r1[k])
    	if (!visited1[i]) 
    		dfs1(i); 
} 
  

void dfs2(int k) { 
		cont2++;
    visited2[k] = true; 
  	for (auto i : r2[k])
    	if (!visited2[i]) 
    		dfs2(i); 
} 

  

int main() { 


		while (cin >> n >>m, n!=0) {
			cont = cont2=0;
			for (int a=1; a<=n; a++) {
				visited1[a]= false;
				visited2[a] = false;
				r1[a].clear();
				r2[a].clear(); 
			}

			int x,y,z;
			for (int a=0; a<m; a++) {
				cin >> x >> y >> z;

				r1[x].push_back(y);
				r2[y].push_back(x);
				if (z==2) {
					r1[y].push_back(x);
					r2[x].push_back(y);
				}
			}
			dfs1(1);dfs2(1);
			
		  if (cont+cont2 == 2*n) 
	        cout << 1 <<endl; 
	    else
	        cout << 0 << endl; 
		}
  
    return 0; 
} 
