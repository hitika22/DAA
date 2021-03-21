# DAA
| Enrollment Number  | Name |
| ------------- | ------------- |
| IIB2019021  | Hitika   |
| IIB2019022  | Gaurav  |
| IIB2019023 | Aditya  |

<hr />

<strong> Ques. Given two integers m & n, find the number of possible sequences of
length n such that each of the next element is greater than or equal
to twice of the previous element but less than or equal to m. Solve
using divide and conquer algorithm.
</strong>

<hr />




### Theory
Algorithm 1 : We use recursion with recursive function as fun(n,m) =  fun(m-1, n) + fun(m/2, n-1); 


Algorithm 2 : We use dynamic programming approach via tabulation.

---
