/*
    https://olimpiada.ic.unicamp.br/pratique/p2/2013/f2/troia/
*/
#include <bits/stdc++.h>

using namespace std;

void dfs(int current, vector<int> *fam, bool *visited) {
    visited[current] = 1;
    for (int a=0; a<fam[current].size(); a++) {
        int relative = fam[current][a];

        if (!visited[relative]) {
            dfs(relative, fam, visited);
        }
    }
}

int fam_count(vector<int> *fam, int n) {
    bool visited[n+1] = {};
    int ans=0;
    for (int a=1; a<=n; a++) {
        if (!visited[a]) {
            dfs(a, fam, visited);
            ans++;
        }   
    }

    return ans;
}

int main() {
    int n, m, l, r;
    cin >> n >> m;

    vector<int> fam[n+1];
    int ans;
    for (int a=0; a<m; a++) {
        cin >> l >> r;

        fam[l].push_back(r);
        fam[r].push_back(l);
    }
    ans = fam_count(fam, n);
    cout << ans << endl;

    return 0; 
}
