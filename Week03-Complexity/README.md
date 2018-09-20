## 1. Vanya and The Lanterns ([492 B](http://codeforces.com/contest/492/problem/B))
[Submission](http://codeforces.com/contest/492/submission/43076955)
Vanya wants to know the radius between *n* lanterns on a street length of *l*.


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

## 3. I Wanna Be the Guy ([469 A](http://codeforces.com/contest/469/problem/A))
[Submission](http://codeforces.com/contest/469/submission/43115800)  
Little X and Y is playing a game, it consists of *n* levels. X can only beat *x* levels of the game, while Y can only beat *y* levels of the game. Can they pass all levels to beat the game? 

Levels (*n*), the amount of levels and the set of levels that X and Y can beat are user-inputted.

We now must input a number to decide how many *n* levels there are in the game. After entering the first input, the user must now input the amount of levels X can beat (*x*). Enter one space, then user must input set of numbers which amount of set must equal to *x*.
If the user inputs 
```
3 2 5 7
```
The first *3* is to decide how many levels can *x* beat, and [2, 5, 7] is the set of levels.  
To exclude the first number from being checked, we enter
```
x = x.split(' ')[1:]
```
This way, x is now declared as the list of the inputted *x*, separated by spaces and excluded the first element of the list.  
Now *x* should be
```
2 5 7
```
Do the same of above for Y.

Now we combine both set of lists from *x* and *y* and we check the combined list to see if they all include all the numbers from 1 to *n*.
```
if len(set(xy)) == n:
```
If the set included all of *n*, we print "I become the guy.". If not, we print "Oh, my keyboard!".

Worst Case : O(n)
Average Case : θ(n)
Best Case : Ω(n)\
