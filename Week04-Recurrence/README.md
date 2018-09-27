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

## 2. Igor In the Museum ([598 D](https://codeforces.com/contest/598/problem/D))  
[Submission](https://codeforces.com/contest/598/submission/43495778)  
So, Igor is in a museum and he wants to see as many pictures as possible. The museum is represented as *n* (rows) and *m* (columns), with each cell marked with '.' to be an empty passable cell, and cells marked with '\*' are impassable cells. He can move to an empty cell. Another inputted number is to decide how many starting points do we want in the museum. All starting positions will always be an empty cell.

We input the *n* for the rows, and *k*, for the columns, then the *k*, for the amount of starting positions. The reason why we have multiple starting positions is because Igor can't move out of a room by himself.
```
example:
******
*..*.*
******
*....*
******
If Igor starts at (2, 2), he won't be able to move to the other cells which houses more empty cells.
```
Then we make the museum walls. After that, the next input would be the starting positions.  
If we use the above museum, if we start at (2, 2), Igor can see all the pictures on 4 directions (up, down, left, right) and he can move to another cell to see a picture that is not viewable from his previous positions. He can't see a picture from a diagonal angle.

Using floodfill algorithm, we can make Igor to see every viewable picture on every empty cell on the museum.  
After each *x* and *y* input, we'll print the amount of pictures he can see.
