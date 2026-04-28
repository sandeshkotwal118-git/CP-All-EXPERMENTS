#include <iostream>
#include <vector>
using namespace std;
int main() {
    int V = 4,i,j;
    vector<vector<int>> adj(V, vector<int>(V, 0));
    adj[0][1] = 1; adj[1][0] = 1;
    adj[0][2] = 1; adj[2][0] = 1;
    adj[0][3] = 1; adj[3][0] = 1;
    adj[1][2] = 1; adj[2][1] = 1;
    cout << "Adjacency Matrix:" << endl;
    for (i = 0; i < V; i++) {
        for (j = 0; j < V; j++) {
            cout << adj[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}