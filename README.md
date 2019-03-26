# Euler's Phi Function
For n in z+, n >= 2, the Euler's Phi function X(n) is the number of positive integers m, where 1 <= m < n and gcd(m,n) = 1. For example, X(2) = 1, X(3) = 2, X(4) = 2, X(5) = 4, X(6) = 2. Write a C++ program to find X(n) for a given n, where 2 <= n <= 32767, and list the integers m, where 1 <= m <= 32767, and list the integers m, where 1 <= m < n and gcd(m,n) = 1.

## Example
```
Please input an integer n: 6
Euler's phi function of 6 is 2,
where gcd(6,1)=1 and gcd(6,5)=1.
```

## Bonus
Write a function int **IsPrimeToEach(int m, n)**  which returns 1 if gcd(m,n) = 1 and 0 if gcd(m,n) != 1. Use this function to complete your program.
