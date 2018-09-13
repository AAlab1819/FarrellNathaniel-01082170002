## 1. Spyke Talks ([291 A](http://codeforces.com/problemset/problem/291/A))
[Submission](http://codeforces.com/contest/291/submission/42828410)  
Sorting algorithm: Cocktail Sort  
A director of a large corporation wants to know how many of his secretaries (amount is defined as *n*) are talking through the Spyke VoIP system. When a call between two people happens, a callID is shown (defined as *x*). The director wants to know how many calls happened between every secretary, however only two-way calls is allowed. Which means if there happens to be three of the same callID shown, a mistake has happened and the situation couldn't have happened in the first place. *n*, *x* is user-inputted.

For an example, there are 6 secretaries, and the callIDs **after sorted** are shown like this
'''
0 1 1 7 7 10
'''
It means secretary 2 and secretary 3 have been using the Spyke system to communicate with each other. Now the program needs to determine how many calls like this have happened between all secretaries. The program finds how many duplicates in *x*, and after it's been found, print the amount (ans). If it turns out there was 3 or more numbers that is a duplicate (indicating a three-way (or more) call has happened), the director regards it as an system error and **-1** is printed. If no call has ever happened, then print **0**.


## 2. Dragons ([230 A](http://codeforces.com/problemset/problem/230/A))
[Submission](http://codeforces.com/contest/230/submission/42834394)  
Sorting algorithm: Shell Sort  
Kirito is stuck in a level in an MMORPG. He has to beat dragons in the level in order to progress to the next level.

When we start, Kirito has *s* as his starting strength stat. We get to enter the amount of dragons (*n*) on a level. As he beats *dragons*, he will get *bonusStrength* from each dragon. Each dragons also has their own *dragonStrength*, and if Kirito's strength (*s*) is less than the *dragonStrength*, he dies, and the program prints "NO". However if his strength is higher than the dragon's strength, he wins and the program prints "YES". *s*, *n*, *dragonStrength*, and *bonusStrength* is user-inputted.

As a level can contain different dragons with each individual *dragonStrength*, Kirito can choose which dragon he wants to fight first, in which we use this as a way to sort the dragons from the weakest to the strongest so Kirito will not die by fighting a dragon stronger than his strength.

First we input *s* as Kirito's starting strength, and enter a space to separate the integers, then we input *n* as the amount of dragons on the level.  
On the next line we input each dragon's strength as *dragonStrength*, and its reward as *bonusStrength*, which Kirito would get if he manages to beat the dragon holding *bonusStrength*.

If Kirito survives against all the dragons (the amount depends on the *n* the user inputted before), he passes the level and "YES" will be printed. But if he dies, programs stops and "NO" is printed.
