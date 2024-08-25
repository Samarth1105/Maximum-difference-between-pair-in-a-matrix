# Maximum-difference-between-pair-in-a-matrix

## Difficulty: Hard

Given an N x N matrix, mat[N][N] of integers. The task is to find the maximum value of mat(c, d) mat(a, b) over all choices of indexes such that both c > a and d > b.

Example 1:

Input:
mat[N][N] = {{ 1, 2, -1, -4, -20 },
             { -8, -3, 4, 2, 1 }, 
             { 3, 8, 6, 1, 3 },
             { -4, -1, 1, 7, -6 },
             { 0, -4, 10, -5, 1 }};
Output: 18
Explanation: The maximum value is 18 as mat[4][2] 
- mat[1][0] = 18 has maximum difference.
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function findMaxValue() which takes a matrix mat and returns an integer as output.

Expected Time Complexity: O(N^2)
Expected Auxiliary Space: O(N^2)
