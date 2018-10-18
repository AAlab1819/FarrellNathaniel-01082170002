## 1. [Find the Running Median](https://www.hackerrank.com/challenges/ctci-find-the-running-median/problem)  
The problem just needs us to find the median of a list, however we start calculating the median from the first number input (in which there's only one element in the list), then we keep adding numbers to the list sequentially all while heapSorting the list until we reach *n* amount of input.

The first line input is to decide how long we want the list to be (*n*). Let's put an example of 4 numbers. Then after the first input, we can input n amount of numbers in the list.   
Input:
```
4
9
5
3
6
```
Output should be:
```
9   (because there weren't anyone else on the list yet)
7   (median of [5, 9])
5   (median of [3, 5, 9])
5.5 (median of [3, 5, 6, 9])
```
Everytime a number is added to the list, it's automatically heapSorted to the list.

Complexity: Worst Case = O(n log n)

## 2. [Roy and Trending Topics](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/)
