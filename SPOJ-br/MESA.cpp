/*
    https://br.spoj.com/problems/MESA/
*/
#include <bits/stdc++.h>

using namespace std;

bool bfs(int root, vector<int> *conn, bool *visited, int *colors) {
    queue<int> q;

    q.push(root);
    visited[root] = 1;
    colors[root] = 1;

    while(!q.empty()) {

        int current = q.front();
        q.pop();

        for (int a=0; a<conn[current].size(); a++) {
            int neighboor = conn[current][a];
    
            if (visited[neighboor]) {
                if (colors[neighboor] == colors[current])
                    return false;
                continue;
            }

            if (colors[current]==1)
                colors[neighboor]=-1;
            else
                colors[neighboor]=1;

            q.push(neighboor);
            visited[neighboor] = true;                        
        }
    }
    return true;
}

bool check_disj(int root, vector<int> *conn, int n) {
    bool visited[n+1] = {};

    for (int a=1; a<=n; a++) {
        if (!visited[a]) {
            int colors[n+1] = {};
            if (!bfs(a, conn, visited, colors)) 
                return false;
        }
    }
    return true;
}
int main() {
    int n, m, x, y, k=1;

    while(cin >> n >> m) {
        vector<int> conn[n+1];
        bool visited[n+1] = {};
        int root;
        for (int a=0; a<m; a++) {
            cin >> x >> y;
            if (a==0) 
                root = x;
            conn[x].push_back(y);
            conn[y].push_back(x);
        }
        bool ans = check_disj(root, conn, n);
        
        cout << "Instancia "<<k++<<endl;
        if (ans)
            cout << "sim" << endl << endl;
        else    
            cout << "nao" << endl << endl;
    }


    return 0; 
}