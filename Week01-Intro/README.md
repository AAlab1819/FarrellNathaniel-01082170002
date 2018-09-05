## 1. Fraction ([854 A](http://codeforces.com/contest/854/problem/A))
The problem here is to find the highest possible fraction that cannot be simplified. The numerator has to be lower than the denominator. In which the code would look like (x, y), x would be the numerator while y is the denominator.

*x* is an user-inputted number that becomes the sum of two numbers. We start by finding the modulus of our inputted number. If the remains turn to be 4, we'll use the if function, where as the numerator we floor divide the inputted number by 2 and **decrease it by 1**, print it after. Same formula is done with the denominator, except we're not decreasing it but **increasing it by 1**.

If the remains turned out to be 2, we apply the same formula above, but we change the value of increase and decrease (highlighted by the bolded sentence above) with 2.

If it's an odd number, we'll use the else function, where the formula is still similar however we do the increasing and decreasing before the floor division.

The first output and second output is the numerator and denominator, respectively.
