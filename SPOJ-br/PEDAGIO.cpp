/*
    https://br.spoj.com/problems/PEDAGIO/
*/
#include <bits/stdc++.h>

using namespace std;

void bfs(int root, vector<int> *ci, bool *visited, int *layer) {
    queue<int> q;

    q.push(root);
    visited[root] = true;

    while(!q.empty()) {

        int current = q.front();
        q.pop();

        for (int i=0; i<ci[current].size(); i++) {
            int neighboor = ci[current][i];

            if (visited[neighboor]) 
                continue;
            
            visited[neighboor] = true;
            q.push(neighboor);
            layer[neighboor] = layer[current]+1;            
        }
    }
}
int main() {
    int c, e, l, p, x, y;
    int k=1;
    while (cin >> c >> e >> l >> p) {
        if (c==0 && e==0 && l==0 && p==0) 
            break;

        vector<int> ci[c+1];

        for (int i=0; i<e; i++) {
            cin >> x >> y;
            
            ci[x].push_back(y);
            ci[y].push_back(x);
        }
        int  layer[c+1]={};
        bool visited[c+1]={};
        bfs(l, ci, visited, layer);
        cout << "Teste "<< k++ << endl;
        for (int i=1; i<=c; i++) {
            if (i!=l) {
                if (layer[i]<=p && visited[i])
                    cout<<i<<" ";
            }    
        }
        cout << endl << endl;
    }


    return 0; 
}