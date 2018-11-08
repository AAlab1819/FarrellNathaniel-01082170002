## 1. SuperSale ([UVa 10130](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1071))

There is a super sale in SuperHiperMarket. They can get extra low price if they take one object of any type, but only one. They can take as many objects as their own strength is able to. Now we can input the list of objects with prices and their weight. And also the amount of person in a group and each person's maximum weight. What's the most value we can get for each group?

First we can input all the test cases as *tc*. Then the number of objects in that tc, as *n*. Followed by *n* lines of each objects that we can input its *p*rice and *w*eight.  
Then we can input the amount of people in the group, followed by their maximum weight.

To solve this, first we do a loop that ensures our current object is less than our own carry weight (so that we won't carry more weight that we're able to, depending on *max_weight* AND we get the most valuable objects first (to get the most value out of the sale) as they're more important than the less value objects.  
If both conditions are met, we'll get the *max_value* of each person that is carrying their own weight. Then add all following persons to *max_value*.

Then we'll print *max_value*.

Complexity: Worst Case: O(n^2)

