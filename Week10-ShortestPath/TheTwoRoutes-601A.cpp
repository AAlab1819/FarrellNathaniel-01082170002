#include<bits/stdc++.h>
using namespace std;

int distance_source[500];
int adj_matrix[401][401];
bool visited[500];
int u;

void BFS (bool train, int town, int routes){
    for(int i=0; i<500; i++) {
        distance_source[i]=INT_MAX;
        visited[i]=false;
    }
    queue<int> queues;
    queues.push(1);
    visited[1]=true;
    distance_source[1]=0;
    while(!queues.empty()){
        u=queues.front();
        queues.pop();
        for(int i=1; i<=town; i++){
            if(train) {
                if(adj_matrix[u][i]==1 && visited[i]==false){
                    queues.push(i);
                    visited[i]=true;
                    distance_source[i]=distance_source[u]+1;
                    if(i==town) {
                        return;
                    }
                }
            }
            else {
                if(adj_matrix[u][i]==0 && visited[i]==false){
                    queues.push(i);
                    visited[i]=true;
                    distance_source[i]=distance_source[u]+1;
                    if(i==town) {
                        return;
                    }
                }
            }
        }
    }
}

int main() {
    int towns, railways, u, v;
    int train, bus;
    cin >> towns>> railways;
    memset(adj_matrix, 0, sizeof(adj_matrix));
    for(int i=0; i<railways; i++) {
        cin >> u >> v;
        adj_matrix[u][v]=1;
        adj_matrix[v][u]=1;
    }
    if(adj_matrix[1][towns]==1){
        train=1;
        BFS(false, towns, railways);
        bus=distance_source[towns];
    }
    else {
        bus=1;
        BFS(true, towns, railways);
        train=distance_source[towns];
    }
    int answer=max(bus, train);

    if(answer==INT_MAX){
        cout<<-1<<endl;
    }
    else {
        cout<<answer<<endl;
    }

    return 0;
}
