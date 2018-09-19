## 1. Vanya and The Lanterns ([492 B](
## 2. Insomnia Cure ([148 A](http://codeforces.com/contest/148/problem/A))
[Submission](http://codeforces.com/contest/148/submission/43086811)  
The princess has some dragons who is trying to steal her. Instead, she beats them up. But does she actually beat them *all* up?

Basically we're just looking for which numbers from 1 to *d* (the amount of dragons total) is a multiple of *k, l, m,* or *n*. *k*, *l*, *m*, *n*, and *d* is user inputted.

I let the user input five times in a separate line, in the order of *k* -> *l* -> *m* -> *n* -> *d*.  *k*, *l*, *m*, *n* only fit number between 1 to 10. *d* can fit from 1 to 100000.

After declaring a variable for *damagedDragons*, I put a loop to check if the numbers inputted is divisible by *k, l, m,* or *n*.
```
for i in range (1, d+1):
    if i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0:
```
If the condition checks out, add 1 to *damagedDragons*.
```
damagedDragons = damagedDragons + 1
```

Once all the dragons have been counted, we print the final *damagedDragons*.

Worst Case : O(n)  
Average Case : θ(n)  
Best Case : Ω(n)
