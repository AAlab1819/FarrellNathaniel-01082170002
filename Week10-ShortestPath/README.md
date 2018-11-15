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
