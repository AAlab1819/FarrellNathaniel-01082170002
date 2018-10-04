## 1. Party ([115 A](http://codeforces.com/contest/115/problem/A))  
[Submission](http://codeforces.com/contest/115/submission/43792870)  
A company is going to hold a party, but they want all the employees to be in a separate groups in which none of them are a superior of another. We need to know how many groups will be formed if there are *n* employees.

The first *n* input will decide how many employees there are in the company. The next input line will decide who is the manager of that employee in that *i*.  
After inputting *n*, we'll start with first employee
```
input 1: 2            #there are two employees
input 2: -1           #Employee 1
input 3: 1            #Employee 2 which boss is Employee 1
```
'-1' means employee in that position does not have any superiors. We are to output the amount of groups or how far until to the last superior.
```
5
4
5
1
-1 
4
```
This will output 3, because there are 3 groups in this arrangement of employees:
- Employee 1 and 5
- Employee 2 and 3
- Employee 4

Complexity:
Worst Case = O(n log n)

## 2. Registration System ([4 C](http://codeforces.com/contest/4/problem/C))  
[Submission](http://codeforces.com/contest/4/submission/43793794)  

TEXT

## 3. Christmas Spruce ([913 B](http://codeforces.com/contest/913/problem/B))  
[Submission](http://codeforces.com/contest/913/submission/43794900)  
We have a rooted tree. We need to know if it's a spruce tree or not, by seeing if every parent has a child that has at least 3 vertices which doesn't have any leaf children.
```
  / 2
1 — 3
  \ 4
```
This is a spruce.
```
  / 2
1 — 3 
  \ 4   / 5
      \ — 6
        \ 7
```
This isn't a spruce because in the first vertices only 2 and 3 which is a leaf children.
```
