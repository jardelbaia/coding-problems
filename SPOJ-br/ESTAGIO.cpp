/*
		https://br.spoj.com/problems/ESTAGIO/
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k=0, a, b;
    cin >> n;
    
    while (n != 0) {
        k++;
        vector< pair<int,int> > als;
        int maior = -1;
        
        for (int i=0; i<n; i++) {
            cin >> a >> b;
            if (b>maior) {
                maior = b;
            } 
            als.push_back(make_pair(a,b));
        }

        cout << "Turma " << k << endl;

        for (int i=0; i<n; i++) {
            if (als[i].second == maior) {
                cout << als[i].first << " ";
            }
        }
        cout << endl << endl;
        cin >> n;
    }
    return 0;
}