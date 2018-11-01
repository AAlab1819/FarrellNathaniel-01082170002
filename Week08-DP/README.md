## Kuriyama Mirai's Stones ([433 B](http://codeforces.com/contest/433/problem/B))  
[Submission](http://codeforces.com/contest/433/submission/45176002)  
Kuriyama-san just got stones from many monsters and and she asks us the cost of them. She'll keep asking us with two different stones, as *l* and *r*. The first question is asking us the sum of all the stones of index *l* and *r*, the second question is asking us the sum of all the stones of index *l* and *r* when it's sorted.

The first *n* input are to decide how many types of stones does Mirai has. The second line *a* input is to give the costs of each stones in *n*. While we're here we'll assign *b* as sorted version of *a*. Then we'll store the original array of *a* and *b* to *p* and *q*, as we'll change the original *a* and *b* later on. The third line input is to decide how many questions did Mirai asked.

We'll do a for loop that creates a cumulative array by adding the previous element into the current one. We'll do each one for *a* and *b*. As we stored the original arrays on *p* and *q*, we'll have no worry of losing them.

Now we'll do a while loop. We can input the integers as told in the question, *type*, *l*, and *r*. If *type* is equal to 1, we'll answer the first question. If not, we'll answer the second question. As the input is entered, the answer is printed immediately after. The loop goes on until *m*, the amount of Mirai's question, is zero.

Complexity: Worst Case: O(n log n)
