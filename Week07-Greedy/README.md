## 1. Partition ([946 A](http://codeforces.com/problemset/problem/946/A/))  
[Submission](http://codeforces.com/contest/946/submission/44842984)  
We have sequence *a* that consists of *n* numbers. We can put numbers in *a* inside *b* and *c*, as if it belongs to them. *B* is the sum of *b*, and *C* is the sum of *c*. How can we get the maximum value if we do *B*-*C*?

We put the inputs as *n* for the amount of numbers we have, and *a* as the numbers we have that is space-separated. Then we do a for loop as such that if a number from sequence *a* is more than 0, we add them into sequence *b*. If it's below 0 (so negative), we add them into sequence *c*. I don't see the need to store the original individual numbers in each sequence so we just add them as we go through each loop.

Then lastly, print *b*-*c*.



## 2. File Name ([978 B](http://codeforces.com/problemset/problem/978/B))  
[Submission](http://codeforces.com/contest/978/submission/44844659)  

## 3. Coupons and Discounts ([731 B](http://codeforces.com/problemset/problem/731/B))
[Submission](http://codeforces.com/contest/731/submission/44857846)
