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


Input
```
First line of input contains two space seperated integers N and M.
```

Output
```
Number of possible sequences of length n such that each of the next element is greater than or equal to twice of the previous element but less than or equal to m
```
---




### Theory
Algorithm 1 : We use recursion with recursive function as fun(n,m) =  fun(m-1, n) + fun(m/2, n-1); 


Algorithm 2 : We use dynamic programming approach via tabulation.

---


### Analysis

**Time Complexity**

```
#Algo 1 :
Worst case : O(m^n)
Best case  : Ω(1) when n=1

#Algo 2 :
Worst case : O(m*n)
Best case  : Ω(1) when answer is 0
```


**Space Complexity**

```
#Algo 1 :
The space complexity is O(m^n)

#Algo 2 :
The space complexity is O(m*n)
```
---
