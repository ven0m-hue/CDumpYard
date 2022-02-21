// Interpolation search forula derivation 
/*
  Condtion for interpolation search is that the array needs to be sorted
  and the array needs to be uniformly distributed, meaning, it must be AP

  if this condition is satisfied, then following array is a linearly distributed 
  wkt general equation of the line mx + c = y
  here the y is value aka array element at x aka the index.
  Finding the corner points 
  => arr[high] = m * high + c --(1)
  => arr[low] = m * low + c --(2)
  (1) - (2)
  we get m = (arr[high] - arr[low]) / (high - low) --(3)
  So in general,
  for a given search value, lets say key

  key = m * position(index) + c 
  so, position
  and from (3) - (2) to eliminate the 'c' term 
  and  we know m 
  and substituting 
  we get,
  pos = low + (key - arr[low]) * (high - lo)/(arr[hi] - arr[low])

*/
#include <stdio.h>

#include <stdlib.h>
 // Function to search data in a given array
int interpolation_search(int * arr, int low, int high, int to_search) {
  if (low <= high && to_search >= arr[low]) {
        if(arr[high]==arr[low]&&to_search==arr[high]&&arr[low]==to_search)
        return high;
    // formula to find index
    int pos = low + (to_search - arr[low]) * (high - low) / (arr[high] - arr[low]);

    // if data found
    if (arr[pos] == to_search)
      return pos;
    // if data is less than current position
    else if (arr[pos] > to_search)
      high = pos - 1;
    // if data is greater than the current position
    else if (arr[pos] < to_search)
      low = pos + 1;
    // recursive call
    return interpolation_search(arr, low, high, to_search);
  }
  // return -1 if the if condition fails
  return -1;
}
//driver code
int main() {
  int * arr, size, index, to_search, i;

  printf("Enter the size: ");
  // taking size
  scanf("%d", & size);
  // dynamically locating memory
  arr = (int * ) malloc(sizeof(int) * size);
    if(arr==NULL)
    {
        printf("Memory not allocated Please try again");
        exit(0);
    }
  for (i = 0; i < size; i++) {
    scanf("%d", & arr[i]);
  }
  printf("Enter the number to search: ");
  // taking the number to search
  scanf("%d", & to_search);
  // calling interpolation search
  index = interpolation_search(arr, 0, size - 1, to_search);
  // If element was found
  if (index != -1)
    printf("Element found at index number: %d", index);
  // If element was not found
  else
    printf("Element not found");

  return 0;
}