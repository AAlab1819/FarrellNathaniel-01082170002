## Kuriyama Mirai's Stones ([433 B](http://codeforces.com/contest/433/problem/B))  
[Submission](http://codeforces.com/contest/433/submission/45176002)  
Kuriyama-san just got stones from many monsters and and she went to ask us their cost. She'll keep asking us with two different stones, as *l* and *r*. The first question is asking us the sum of all the stones of index *l* and *r*, the second question is asking us the sum of all the stones of index *l* and *r* when it's sorted.

The first *n* input are to decide how many types of stones does Mirai has. The second line *a* input is to give the costs of each stones in *n*. While we're here we'll assign *b* as sorted version of *a*. Then we'll store the original array of *a* and *b* to *p* and *q*, as we'll change the original *a* and *b* later on. The third line input is to decide how many questions did Mirai asked.

We'll do a for loop that creates a cumulative array by adding the previous element into the current one. We'll do each one for *a* and *b*. As we stored the original arrays on *p* and *q*, we'll have no worry of losing them.

Now we'll do a while loop. We can input the integers as told in the question, *type*, *l*, and *r*. If *type* is equal to 1, we'll answer the first question. If not, we'll answer the second question. As the input is entered, the answer is printed immediately after. The loop goes on until *m*, the amount of Mirai's question, is zero.

Complexity: Worst Case: O(n log n)

## Party Lemonade ([913 C](http://codeforces.com/contest/913/problem/C))  
[Submission](http://codeforces.com/contest/913/submission/45177614)  
We have to buy lemonade for a New Year party. The store sells different types of liters per bottle at different costs. There are unlimited amount of bottles in the store. We need to buy at least *L* liters, with the smallest number of roubles to spend to obtain that volume.

The first input is a space-separated integer, first input is n, the amount of different types of volumes in the store. L is the least amount of volume we need. It seems we are allowed to buy more than that as long the cost is lower.

Complexity: Worst Case : O(n)
