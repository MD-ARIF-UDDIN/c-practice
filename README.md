Problem:1

Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input and show output in reverse order.

Sample Input: 
5
5 10 3 20 1
Sample Output:
1 20 3 10 5

problem:2

You will be given an positive integer N and after that an integer array of size N. Then you will be given Q which
refers to queries. For each query you will be given i and v where i refers to the index and v to value. You need to
add the value to that index. After all of the queries print the values

Sample Input: 
5
1 2 3 4 5
3
0 10
2 5
4 5
Sample Output:
11 2 8 4 10


Problem:3
Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input and tell if the array contains only one unique value or not. Print “YES” or “NO”.

Sample Input 1: 
5 
2 4 2 2 4
Sample Output 1:
NO
Sample Input 2: 
5 
4 4 4 4 4
Sample Output 2:
YES


Problem:4
Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input. You need to print the values and for every value, you need to print other values than that. See the
samples for more clarification.
Hints: Use nested loop

Sample Input:
5
1 2 3 4 5 
Sample Output:
1 - 2 3 4 5
2 - 1 3 4 5
3 - 1 2 4 5
4 - 1 2 3 5
5 - 1 2 3 4


Problem:5
Write a C program to take one positive integer N, the size of an array of unique values as input. Then take an
integer array of size N as input. After that take another integer target. You need to tell if you can make target by
adding any two different values from that array.
Hint: Use nested loop
Sample Input:
5 
2 4 3 6 8
7
Sample Output:
YES
Sample Input: 
5 
2 4 3 1 8
8
Sample Output:
NO


Problem:6
Write a C program to take a non-negative integer N and print the pattern as shown below
For N=5, the pattern should be
*
**
***
****
*****
Sample Input:
4 
Sample Output:
*
**
***
****
