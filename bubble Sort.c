/* Bubble sort */

#include <stdio.h>

int main()
{
  int array[]={5,7,3,1,4}, x, y, z, swap;

  x = sizeof(array)/sizeof(array[0]);

  for (y = 0 ; y < x - 1; y++)
  {
    for (z = 0 ; z < x - y - 1; z++)
    {
      if (array[z] > array[z+1])
      {
        swap       = array[z];
        array[z]   = array[z+1];
        array[z+1] = swap;
      }
    }
  }

  printf("\nSorted list in ascending order : ");

  for (y = 0; y < x; y++)
     printf("%d ", array[y]);

 for (y = 0 ; y < x - 1; y++)
  {
    for (z = 0 ; z < x - y - 1; z++)
    {
      if (array[z] < array[z+1])
      {
        swap       = array[z];
        array[z]   = array[z+1];
        array[z+1] = swap;
      }
    }
  }

  printf("\n\nSorted list in descending order : ");
  for (y = 0; y < x; y++)
     printf("%d ", array[y]);
     printf("\n");

  return 0;
}
