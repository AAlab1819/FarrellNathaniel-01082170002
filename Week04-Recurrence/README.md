## 1. Buttons ([268 B](http://codeforces.com/contest/268/problem/B))   
[Submission](http://codeforces.com/contest/268/submission/43417569)  
This time we need to open a lock. It's like a keypad but only with *n* buttons, and the lock opens if we push the buttons in a certain order. If the order is messed up, the sequence is cancelled and the buttons is returned to initial state. The *n*umber of buttons is user-inputted. 

The character will try every single combination and wants to know how many times had he pressed the buttons if he manages to only succeed in the last trial combination.

First, we let the user input a number, for *n*. This input will be the number of buttons.  
Then we'll assign *p* to initially keep the same number as *n*.

After that, we'll make a loop to check every number (*i*) from 1 to *n* (but excluding *n*),
```
    p += i*(n-i)
```
while adding them to *p* every checks. We do not need to check *n* as it'll always equal zero.

Then after using all numbers from 1 to *n* in the loop, we can finally print the final *p*.
