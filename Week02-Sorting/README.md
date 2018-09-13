## 1. Spyke Talks ([291 A](http://codeforces.com/problemset/problem/291/A))
Sorting algorithm: Cocktail Sort
## 2. Dragons ([230 A](http://codeforces.com/problemset/problem/230/A))
[Submission](http://codeforces.com/contest/230/submission/42834394)
Sorting algorithm: Shell Sort
Kirito is stuck in a level in an MMORPG. He has to beat dragons in the level in order to progress to the next level.

When we start, Kirito has *s* as his starting strength stat. We get to enter the amount of dragons (*n*) on a level. As he beats *dragons*, he will get *bonusStrength* from each dragon. Each dragons also has their own *dragonStrength*, and if Kirito's strength (*s*) is less than the *dragonStrength*, he dies, and the program prints "NO". However if his strength is higher than the dragon's strength, he wins and the program prints "YES". *s*, *n*, *dragonStrength*, and *bonusStrength* is user-inputted.

As a level can contain different dragons with each individual *dragonStrength*, Kirito can choose which dragon he wants to fight first, in which we use this as a way to sort the dragons from the weakest to the strongest so Kirito will not die by fighting a dragon stronger than his strength.

First we input *s* as Kirito's starting strength, and enter a space to separate the integers, then we input *n* as the amount of dragons on the level.  
On the next line we input each dragon's strength as *dragonStrength*, and its reward as *bonusStrength*, which Kirito would get if he manages to beat the dragon holding *bonusStrength*.

If Kirito survives against all the dragons (the amount depends on the *n* the user inputted before), he passes the level and "YES" will be printed. But if he dies, programs stops and "NO" is printed.
