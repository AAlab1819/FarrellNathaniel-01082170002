## 1. Dijkstra? ([20 C](http://codeforces.com/contest/20/problem/C))  
[Solution](http://codeforces.com/contest/20/submission/45768304)  
We are told to find the shortest path in a graph by finding the paths with the lowest costs.

The first input lets us enter the amount of vertices and amount of edges. After that we enter each edges in the order of: start, end, and cost. For example
```
5 6     # 5 as the amount of vertices, and 6 as the amount of edges
1 2 2   
2 5 5
2 3 4
1 4 1   # 1 4 as the shortest path because of 1 cost
4 3 3
3 5 1   # 3 5 as the shortest path because of 1 cost
```
The shortest paths are 1 4 and 3 5 because of their low cost. So 
```
1 4 3 5
``` 
is printed.

Complexity Worst Case: O(n log n)

## 2. The Two Routes ([601 A](http://codeforces.com/problemset/problem/601/A))  
[Solution](http://codeforces.com/problemset/submission/601/45771218)  
We need to find the minimum amount of time for both train and bus to reach the last town. The train and bus CANNOT meet at the same town simultaneously to avoid accidents, except for the last town. If it's impossible for one of the vehicles to reach the last town in any way, print -1.

The first input contains the amount of towns and the amount of railways connecting the towns. The next lines contains *u* and *v* as the two towns that connected with a railway. Only trains can go through railways. If there's a town that isn't connected by a railway, then a bus can go through there.

We use adjacency matrix. One trip from town *u* to *v* means one hour of trip. Counting the trips of both vehicle, we need to know how many hours of trips does it take until the last vehicle reaches last town. We'll check if there's a railway from 1 to n town. If there's a railway, advance the train. If there's no railway, advance the bus.
We'll use BFS to find shortest path to the last town from town 1. 

Complexity Worst Case: O(n^2)
