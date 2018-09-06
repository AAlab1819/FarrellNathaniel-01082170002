## 1. Fraction ([854 A](http://codeforces.com/contest/854/problem/A))  
[Submission](https://codeforces.com/contest/854/submission/42497954)  
The problem here is to find the highest possible fraction that cannot be simplified. The numerator has to be lower than the denominator. In which the code would look like (x, y), x would be the numerator while y is the denominator.

*x* is an user-inputted number that becomes the sum of two numbers. We start by finding the modulus of our inputted number. If the remains turn to be 4, we'll use the if function, where as the numerator we floor divide the inputted number by 2 and **decrease it by 1**, print it after. Same formula is done with the denominator, except we're not decreasing it but **increasing it by 1**.

If the remains turned out to be 2, we apply the same formula above, but we change the value of increase and decrease (highlighted by the bolded sentence above) with 2.

If it's an odd number, we'll use the else function, where the formula is still similar however we do the increasing and decreasing before the floor division.

The first output and second output is the numerator and denominator, respectively.

## 2. Tricky Alchemy ([912 A](http://codeforces.com/contest/912/problem/A))  
[Submission](https://codeforces.com/contest/912/submission/42545972)  
Grisha needs to obtain some christmas balls, and a way to obtain them is combine a few crystals of them, depending on the colors. The amount of crystals that Grisha has and the amount of balls (s)he needs is user-inputted. 
The problem gives us details below:
- 1 Yellow Ball requires 2 Yellow Crystals (P = 2a)
- 1 Green Ball requires 1 Yellow Crystal and 1 Blue Crystal (Q = ab)
- 1 Blue Ball requires 3 Blue Crystals (R = 3b)
In the "left"-side of the formula we see the Balls that requires some Yellow crystals,
```python
(2*P+Q-a,0)
```
P (Yellow Ball) requires 2a (Yellow Crystals), and Q requires only one Yellow Crystals. We sum the amount of crystals that we need, then we subtract that amount from the crystals that we already have, in which now we know how much Yellow crystals we're lacking of.

Same is done with "right"-side of the formula,
```python
(3*R+Q-b, 0)
```
R requires 3b, and Q only requires one Yellow Crystals. We do the exact same as above, sum the amount that we need, then we subtract the amount needed from the crystals that we already have.

## 3. Diverse Team ([988 A](http://codeforces.com/contest/988/problem/A))  
[Submission](https://codeforces.com/contest/988/submission/42548805)  
There are *n* amount of students in a class, with various ratings. We have to know the possibility of forming a team consisting of students with distinct ratings, with size of *k*. If it's possible to form a diverse team, we have to print "YES" and print one example of a team with the ratings. The amount of students in the class, the size of the team, and the ratings are user-inputted.

The user inputs their amount of students and their size of the team, then on the next input they have to fill the ratings of the students.

We define *team* as the list of ratings that have been inputted (*a*) and set is used to make sure that the function only checks different numbers in the list of ratings, since the problem requires the team has to have distinct ratings.

If the length of the *team* is less than the user-inputted *k*, the program will print "NO". However, if the length is more or equal to the size, "YES" will be printed, and an example of the the team of the said ratings will be printed as well below it.




