#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int,int>> graph[N];
int source[N];
long long shortestDistance[N]={0};
bool visited[N]={0};

void dijkstra(int starting_point) {
    typedef tuple<long long, int, int> path;
    long long cost;
    int destination, previous;
    priority_queue<path, vector<path>, greater<path>> queues;
    queues.push(make_tuple(0, starting_point, -1));
    while(!queues.empty()) {
        path now = queues.top();
        queues.pop();
        cost=get<0>(now);
        previous=get<2>(now);
        destination=get<1>(now);
        if(visited[destination]) {
            continue;
        }
        else {
            visited[destination] = true;
            source[destination] = previous;
            for(int i=0; i<graph[destination].size(); i++) {
                if(visited[graph[destination][i].first]==false)
                    queues.push(make_tuple(cost + graph[destination][i].second, graph[destination][i].first, destination));
            }
        }
    }
}

void print_path(int destination) {
    if(source[destination]==-1) {
        cout<<-1;
    }
    else {
        stack<int> vertex;
        while(destination>0) {
            vertex.push(destination);
            destination=source[destination];
        }
        while(!vertex.empty()) {
            cout<<vertex.top()<<" ";
            vertex.pop();
        }
    }
}

int main() {
    int amount_vertices, amount_edges;
    int first_edge, second_edge, weights;
    for (int i=0; i<N; i++) {
        source[i]=-1;
    }
    cin>>amount_vertices>>amount_edges;
    while (amount_edges--) {
        cin>>first_edge>>second_edge>>weights;
        graph[first_edge].push_back(make_pair(second_edge, weights));
        graph[second_edge].push_back(make_pair(first_edge, weights));
    }
    dijkstra(1);
    print_path(amount_vertices);

    return 0;
}
