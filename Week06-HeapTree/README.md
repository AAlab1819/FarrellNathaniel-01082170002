## 1. [Find the Running Median](https://www.hackerrank.com/challenges/ctci-find-the-running-median/problem)  
The problem just needs us to find the median of a list, however we start calculating the median from the first number input (in which there's only one element in the list), then we keep adding numbers to the list sequentially all while heapSorting the list until we reach *n* amount of numbers.

The first line input is to decide how long we want the list to be (*n*). Let's put 4 numbers as an example. Then after the first input, we can input *n* amount of numbers in the list.   
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

Complexity:  
Worst Case = O(n log n)

## 2. [Roy and Trending Topics](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/)  
Roy is developing a widget that shows the Trending Topics of that day. Each topic has an ID and a score. Trending Topics will choose Top 5 topics that had the most increases of score that day compared to the day before. If two topics had the same amount of increases, the one with higher ID is chosen. The changes that affects the score of topics are: **Post** mentions (**50**), **Likes** (**5**), **Comments** (**10**), and **Shares** (**20**).

First *n* line lets us decide how many topics do we have. After that, *n* lines of input follows, each containing 6 space separated numbers for id, z, p, l, c, s.

The program will pick 5 topics from all the topics that had the highest *change*s, then print the picked topics with the ID and the new score. The topic with highest *change*s will be sorted to the top. For two topics that had the same amount of *change*, the higher ID topic will be chosen.

Complexity:
Worst Case = O(n log n)
