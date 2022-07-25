/* Given an array of elements of length N, ranging from 0 to N – 1. All elements may not be present in the array. If the element is not present then there will be -1 present in the array. Rearrange the array such that A[i] = i and if i is not present, display -1 at that place.

Examples: 

Input : arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
Output : [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]

Input : arr = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4}
Output : [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
         11, 12, 13, 14, 15, 16, 17, 18, 19] */



// Naive Approach


#include <iostream>
using namespace std;

// Function to transform the array
void fixArray(int ar[], int n)
{
  int i, j, temp;
  
  // Iterate over the array
  for (i=0; i<n; i++)
  {
    for (j=0; j<n; j++)
    {
      // Check is any ar[j]
      // exists such that
      // ar[j] is equal to i
      if (ar[j] == i) {
        temp = ar[j];
        ar[j] = ar[i];
        ar[i] = temp;
        break;
      }
    }
  }
  
  // Iterate over array
  for (i=0; i<n; i++)
  {
    // If not present
    if (ar[i] != i)
    {
      ar[i] = -1;
    }
  }
  
  // Print the output
  cout << "Array after Rearranging " << endl;
  for (i=0; i<n; i++) {
    cout << ar[i] << " ";
  }
}

// Driver code
int main()
{
  int n, ar[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
  n = sizeof(ar) / sizeof(ar[0]);
  
  // Function call
  fixArray(ar, n);
}
    
    
    
    
    
    
    
