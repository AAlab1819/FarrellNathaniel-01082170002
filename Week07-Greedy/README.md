## 1. Partition ([946 A](http://codeforces.com/problemset/problem/946/A/))  
[Submission](http://codeforces.com/contest/946/submission/44842984)  
We have sequence *a* that consists of *n* numbers. We can put numbers in *a* inside *b* and *c*, as if it belongs to them. *B* is the sum of *b*, and *C* is the sum of *c*. How can we get the maximum value if we do *B*-*C*?

We put the inputs as *n* for the amount of numbers we have, and *a* as the numbers we have that is space-separated. Then we do a for loop as such that if a number from sequence *a* is more than 0, we add them into sequence *b*. If it's below 0 (so negative), we add them into sequence *c*. I don't see the need to store the original individual numbers in each sequence so we just add them as we go through each loop.

Then lastly, print *b*-*c*.  
Complexity: Worst Case: O(n)

## 2. File Name ([978 B](http://codeforces.com/problemset/problem/978/B))  
[Submission](http://codeforces.com/contest/978/submission/44844659)  
In the social network Codehorses, if a file has 3 or more "x" in the file name, it gets picked by the system and stopped. But we can delete one or more characters from the file name so that it won't get picked by the system. How many deletions do we need to do?

The first inputs *n* are to decide the length of the file name, and *name* is to input the filename itself. We start a for loop that checks every single character in *name*, if it does not equal 'x', then the x *count*er set as 0. That means in later checks every character that isn't an *x* can function as a "separator" between consecutive *x*s.

If it does encounter an 'x', the *count*er goes up by 1. If the x *count*er exceeds 2, then that character needs to be deleted, so we add 1 to *ans*. If after consecutive *x*s it meets something that is not equal to *x*, then our separator will do its job and the *count*er is reset to 0, so we won't continuously count the previous x into our deletion counter *ans*.

When the loop is done, print *ans*.  
Complexity: Worst Case: O(n)

## 3. Coupons and Discounts ([731 B](http://codeforces.com/problemset/problem/731/B))
[Submission](http://codeforces.com/contest/731/submission/44857846)  
Sereja wants to buy pizzas for his teams but only with coupons and discounts. The coupon works when Sereja buys one pizza in two consecutive days and the other discount works if Sereja buys two pizzas in the same day. Sereja can use many coupons as he wants but he doesn't want to have to order an extra pizza when there is no team to give to. If there's one active coupon that we need to fulfill in the coupon or discount, we'll call it *carrying*.

The first inputs are *n* as the "days" and *teams* as the amount of teams that works on each days.  
We'll do a for loop that first checks if there's no team attending the practice AND *carrying* is set to 1, that means there will be a day when we're buying a pizza for no one and I guess pizzas in this universe can't last more than a day. So we'll instantly print NO and exit the loop from there.

The second if statement works to add pizzas into *carrying*, if we bought odd amount of pizzas, that means there's 1 pizza which we can't use the same-day discount and we'll have to use the two-day coupon. That means in the next day, there has to be at least 1 pizza to fulfill the coupon otherwise the first *if* statement will trigger and NO will be printed.  
But if not, the for loop will go to the second *if* statement again and if we happen to buy odd amount of pizzas, we can use the coupon that we used the previous day.

As long as in the loop there's not a day that we have to buy an extra pizza just to fulfill the coupon or discount (which means *carrying* is 0 when the loop reaches end of *n* days), YES will be printed.

Complexity: Worst Case: O(n)

