/* Given a matrix, clockwise rotate elements in it.

Examples:

Input
1    2    3
4    5    6
7    8    9

Output:
4    1    2
7    5    3
8    9    6
*/



// C++ program to rotate a matrix

#include <bits/stdc++.h>
#define R 4
#define C 4
using namespace std;

// A function to rotate a matrix mat[][] of RxC.
// Initially, m=R and n=c
void rotatematrix(int m, int n, int mat[R][C])
{
  int row=0, col=0;
  int prev, curr;
  
  /*
  row - startibg row index
  m - ending row index
  col - starting column index
  n - ending column index
  i - iterator
  */
  while (row<m && col<n)
  {
    if(row+1 == m || col+1 == n)
      break;
    
    // Store the first element of ne
